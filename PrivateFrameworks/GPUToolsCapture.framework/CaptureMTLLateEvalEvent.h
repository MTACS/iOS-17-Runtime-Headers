
@interface CaptureMTLLateEvalEvent : NSObject <CaptureMTLObject, MTLEvent, MTLLateEvalEvent, MTLSharedEvent> {
    <MTLSharedEventSPI><MTLLateEvalEvent><MTLEvent> * _baseObject;
    CaptureMTLDevice * _captureDevice;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) <MTLLateEvalEvent> *baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property unsigned long long signaledValue;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;

- (void).cxx_destruct;
- (id)IOSurfaceSharedEvent;
- (id)baseObject;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (id)label;
- (id)newSharedEventHandle;
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(id /* block */)arg3;
- (id)originalObject;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setLabel:(id)arg1;
- (void)setSignaledValue:(unsigned long long)arg1;
- (unsigned long long)signaledValue;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;
- (bool)waitUntilSignaledValue:(unsigned long long)arg1 timeoutMS:(unsigned long long)arg2;

@end
