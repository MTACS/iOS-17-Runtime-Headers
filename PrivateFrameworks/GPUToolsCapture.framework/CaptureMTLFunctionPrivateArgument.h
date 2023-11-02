
@interface CaptureMTLFunctionPrivateArgument : NSObject <CaptureMTLObject, MTLFunctionPrivateArgumentSPI> {
    NSObject<MTLFunctionPrivateArgumentSPI> * _baseObject;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) <MTLFunctionPrivateArgumentSPI> *baseObject;
@property (readonly) NSString *name;
@property (readonly) NSString *qualifier;
@property (readonly) unsigned long long streamReference;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;
@property (readonly) NSString *typeName;

- (void).cxx_destruct;
- (id)baseObject;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext { }*)arg2;
- (id)name;
- (id)originalObject;
- (id)qualifier;
- (bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;
- (id)typeName;

@end
