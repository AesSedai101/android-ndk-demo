package za.co.roshuis.ndk;

/**
 * @author Elsabe
 */
public class OpenGLJNIWrapper {
    static {
        System.loadLibrary("native");
    }

    public static native void on_surface_created();

    public static native void on_surface_changed(int width, int height);

    public static native void on_draw_frame();
}
