
@interface VFXCore.VideoCaptureSession : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    void frameTime;
    void metalTextureCache;
    void outputTexture;
    void sampleBuffer;
    void session;
}

- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)dealloc;
- (id)init;

@end
