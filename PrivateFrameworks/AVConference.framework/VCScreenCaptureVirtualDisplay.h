
@interface VCScreenCaptureVirtualDisplay : VCObject <VCScreenCaptureSource> {
    NSObject<VCScreenCaptureSourceDelegate> * _delegate;
    struct _VCScreenCaptureSourceContext { 
        void *sinkContext; 
        int (*sinkCallback)(); 
    }  _frameCallback;
    struct OpaqueFigVirtualDisplaySession { } * _session;
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
- (int)setupCaptureSession:(id)arg1;
- (void)shouldClearScreen:(bool)arg1;
- (int)startScreenCaptureWithConfig:(id)arg1;
- (int)stopScreenCapture;

@end
