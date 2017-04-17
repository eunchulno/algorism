// input
var input = [];
// I/O module
require('readline')
.createInterface(process.stdin, {})
.on('line', function(line) {
  input.push(line.trim());
}).on('close', function() {
// start code
	for (var i=1 ; i<input.length ; i++){
		process.stdout.write(decodeURIComponent(input[i])+'\n');
	}

})
