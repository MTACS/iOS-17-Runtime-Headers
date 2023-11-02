
@interface VCScreenCaptureFigCaptureController : VCObject <FigScreenCaptureFrameHandlerDelegate, VCScreenCaptureSource> {
    FigScreenCaptureController * _captureControllerSession;
    NSObject<VCScreenCaptureSourceDelegate> * _delegate;
    struct _VCScreenCaptureSourceContext { 
        void *sinkContext; 
        int (*sinkCallback)(); 
    }  _frameCallback;
    bool  _isRunning;
    bool  _shouldClearScreen;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _stateMutex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)callbackWithEventString:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)initWithDelegate:(id)arg1 screenCaptureSourceContext:(const struct _VCScreenCaptureSourceContext { void *x1; int (*x2)(); }*)arg2;
- (int)pauseScreenCapture:(bool)arg1;
- (void)screenCaptureController:(id)arg1 didFailWithStatus:(int)arg2;
- (void)screenCaptureController:(id)arg1 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 transformFlags:(unsigned long long)arg3;
- (void)screenCaptureControllerDidReceiveClearScreen:(id)arg1;
- (void)screenCaptureControllerMediaServicesWereReset:(id)arg1;
- (void)screenCaptureControllerWasPreempted:(id)arg1;
- (void)setIsRunning:(bool)arg1;
- (void)shouldClearScreen:(bool)arg1;
- (int)startScreenCaptureWithConfig:(id)arg1;
- (int)stopScreenCapture;

@end
