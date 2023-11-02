
@interface ChatKit.ClarityCameraModel : NSObject <AVCaptureFileOutputRecordingDelegate, AVCapturePhotoCaptureDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _currentVideoURL;
    void captureSession;
    void captureSessionRuntimeErrorSubscription;
    void videoDeviceInput;
    void videoOutput;
    void videoRecordCompletionBlock;
    void videoRecordingWasCanceled;
}

- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (id)init;

@end
