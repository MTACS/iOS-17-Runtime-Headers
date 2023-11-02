
@interface MLKit.CameraMonitor : NSObject <AVCapturePhotoCaptureDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    void authSetupResult;
    void camera;
    void cameraInput;
    void captureSession;
    void liveVideoFeedQueue;
    void monitorObject;
    void photoOutput;
    void sessionQueue;
    void videoOutput;
}

- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)init;

@end
