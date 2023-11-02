
@interface CaptureMTLIOCommandQueue : NSObject <CaptureMTLObject, MTLIOCommandQueueSPI> {
    <MTLIOCommandQueueSPI> * _baseObject;
    CaptureMTLDevice * _captureDevice;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) <MTLIOCommandQueue> *baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long globalTraceObjectID;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;

- (void).cxx_destruct;
- (void)barrier;
- (id)baseObject;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)device;
- (void)enqueueBarrier;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)globalTraceObjectID;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (id)label;
- (id)originalObject;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setLabel:(id)arg1;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;

@end
