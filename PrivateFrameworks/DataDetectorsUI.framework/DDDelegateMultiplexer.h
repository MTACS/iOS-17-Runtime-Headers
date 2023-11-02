
@interface DDDelegateMultiplexer : NSProxy {
    <NSObject> * _delegateA;
    <NSObject> * _delegateB;
}

- (void).cxx_destruct;
- (bool)conformsToProtocol:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDelegate:(id)arg1 andDelegate:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
