
@interface CaptureMTLCaptureManager : MTLCaptureManager <CaptureMTLObject> {
    NSString * _gputracePath;
    bool  _isToolManager;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
    NSObject<OS_dispatch_semaphore> * _waitResponse;
}

@property (readonly) id baseObject;
@property (readonly) unsigned long long streamReference;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;

+ (id)toolsCaptureManager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCaptureContext:(struct GTTraceContext { }*)arg1 andIsToolsManager:(bool)arg2;
- (bool)isCapturing;
- (id)newCaptureScopeWithCommandQueue:(id)arg1;
- (id)newCaptureScopeWithDevice:(id)arg1;
- (void)startCaptureWithCommandQueue:(id)arg1;
- (bool)startCaptureWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)startCaptureWithDevice:(id)arg1;
- (void)startCaptureWithScope:(id)arg1;
- (void)stopCapture;
- (bool)supportsDestination:(long long)arg1;
- (struct GTTraceStream { }*)traceStream;

@end
