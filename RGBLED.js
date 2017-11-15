var five = require("johnny-five");
var board = new five.Board();

board.on("ready", function() {
  // Initialize the RGB LED
  var led = new five.Led.RGB({
    pins: {
      red: 9,
      green: 10,
      blue: 11
    }
  });

  var colombia_flag = ["FFFF00", "0000FF", "FF0000"];
  var index = 0;
  this.loop(1000, function() {
    led.color(colombia_flag[index++]);
    if (index ===  colombia_flag.length) {
  	  index = 0;
    }	
  });
});