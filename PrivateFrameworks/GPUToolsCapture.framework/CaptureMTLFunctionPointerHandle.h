
@interface CaptureMTLFunctionPointerHandle : NSObject <CaptureMTLObject, MTLFunctionPointerHandleSPI> {
    <MTLFunctionPointerHandleSPI> * _baseObject;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) <MTLFunctionPointerHandleSPI> *baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long gpuAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long resourceIndex;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;

- (void).cxx_destruct;
- (id)baseObject;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)gpuAddress;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext { }*)arg2;
- (id)originalObject;
- (unsigned long long)resourceIndex;
- (bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;

@end
