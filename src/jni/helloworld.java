package jni;

public class helloworld {

	static{
		System.loadLibrary("helloworld");
	}
	
	public native void disHelloWorld();
	
	public static void main(String[] arg0){

		new helloworld().disHelloWorld();
	}
}
