var five = require("johnny-five");
var board = new five.Board();

board.on("ready", function() {
  // Assuming a sensor is attached to pin "A0"  
  this.samplingInterval(1000);
  this.pinMode(0, five.Pin.ANALOG);  
  this.analogRead(0, function(ADCValue) {
	var voltage = ADCValue * 0.004882814;
    var degreesC = (voltage - 0.5) * 100.0;
    console.log("voltage: "+voltage+" deg C: "+degreesC);
  });
});