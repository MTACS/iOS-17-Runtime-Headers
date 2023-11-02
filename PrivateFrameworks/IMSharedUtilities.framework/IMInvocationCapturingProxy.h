
@interface IMInvocationCapturingProxy : NSProxy {
    id /* block */  _forwardingHandler;
    Protocol * _protocol;
}

@property (nonatomic, readonly, copy) id /* block */ forwardingHandler;
@property (nonatomic, readonly) Protocol *protocol;

- (void).cxx_destruct;
- (bool)conformsToProtocol:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id /* block */)forwardingHandler;
- (id)initWithProtocol:(id)arg1 forwardingHandler:(id /* block */)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)protocol;
- (bool)respondsToSelector:(SEL)arg1;

@end
