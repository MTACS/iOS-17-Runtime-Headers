
@interface CaptureMTLFunctionHandle : NSObject <CaptureMTLObject, MTLFunctionHandle> {
    <MTLFunctionHandle> * _baseObject;
    CaptureMTLDevice * _captureDevice;
    CaptureMTLFunction * _captureFunction;
    CaptureMTLComputePipelineState * _computePipelineState;
    CaptureMTLRenderPipelineState * _renderPipelineState;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) <MTLFunctionHandle> *baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;

- (void).cxx_destruct;
- (id)baseObject;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)functionType;
- (id)initWithBaseObject:(id)arg1 captureComputePipelineState:(id)arg2 captureFunction:(id)arg3;
- (id)initWithBaseObject:(id)arg1 captureRenderPipelineState:(id)arg2 captureFunction:(id)arg3;
- (id)name;
- (id)originalObject;
- (bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;

@end
