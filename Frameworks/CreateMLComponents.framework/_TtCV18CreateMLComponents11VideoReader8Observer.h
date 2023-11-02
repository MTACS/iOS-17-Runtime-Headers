
@interface _TtCV18CreateMLComponents11VideoReader8Observer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {
    void backCamera;
    void backCameraInput;
    void cameraSession;
    void configuration;
    void continuation;
    void currentCameraPosition;
    void frontCamera;
    void frontCameraInput;
    void queue;
}

- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)dealloc;
- (id)init;

@end
