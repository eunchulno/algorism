// header를 가리킨다.
// 동적배열로 생성
var list = [];

function createNode(data){
	var data = data;
	return function(){
		return data;
	};
}

function AppendNode(){

}

var b = createNode(10);


