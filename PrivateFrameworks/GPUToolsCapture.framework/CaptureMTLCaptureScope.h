
@interface CaptureMTLCaptureScope : MTLCaptureScope <CaptureMTLObject> {
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) id baseObject;
@property (readonly) unsigned long long streamReference;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;

- (void)beginScope;
- (void)dealloc;
- (void)endScope;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2 captureContext:(struct GTTraceContext { }*)arg3;
- (void)setLabel:(id)arg1;
- (unsigned long long)streamReference;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;

@end
