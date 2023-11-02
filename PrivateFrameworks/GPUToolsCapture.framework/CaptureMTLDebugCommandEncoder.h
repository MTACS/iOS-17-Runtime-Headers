
@interface CaptureMTLDebugCommandEncoder : NSObject <CaptureMTLObject, MTLDebugCommandEncoder> {
    <MTLDebugCommandEncoder> * _baseObject;
    CaptureMTLCommandBuffer * _captureCommandBuffer;
    CaptureMTLDevice * _captureDevice;
    NSMutableSet * _retainedObjects;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) <MTLDebugCommandEncoder> *baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
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
- (void)dumpBuffer:(id)arg1;
- (void)dumpBuffer:(id)arg1 name:(const char *)arg2;
- (void)dumpTexture:(id)arg1;
- (void)dumpTexture:(id)arg1 name:(const char *)arg2;
- (void)dumpTexture:(id)arg1 name:(const char *)arg2 glMode:(bool)arg3;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;
- (id)originalObject;
- (bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;

@end
