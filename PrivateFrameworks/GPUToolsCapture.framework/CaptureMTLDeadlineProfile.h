
@interface CaptureMTLDeadlineProfile : NSObject <CaptureMTLObject, MTLDeadlineProfile> {
    <MTLDeadlineProfile> * _baseObject;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) <MTLDeadlineProfile> *baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
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
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext { }*)arg2;
- (id)originalObject;
- (bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;

@end