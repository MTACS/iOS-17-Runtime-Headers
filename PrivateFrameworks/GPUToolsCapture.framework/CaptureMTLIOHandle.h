
@interface CaptureMTLIOHandle : NSObject <CaptureMTLObject, MTLIOHandleSPI> {
    <MTLIOHandleSPI> * _baseObject;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) <MTLIOFileHandle> *baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long globalTraceObjectID;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;
@property (readonly) unsigned int vnioID;

- (void).cxx_destruct;
- (id)baseObject;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)globalTraceObjectID;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext { }*)arg2;
- (id)label;
- (id)originalObject;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setLabel:(id)arg1;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;
- (unsigned int)vnioID;

@end
