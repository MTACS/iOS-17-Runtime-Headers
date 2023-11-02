
@interface MRLazyProxy : NSProxy {
    id /* block */  _objectCallback;
    Protocol * _protocol;
}

@property (nonatomic, readonly) id /* block */ objectCallback;
@property (nonatomic, readonly) Protocol *protocol;

+ (id)proxyWithProtocol:(id)arg1 objectCallback:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id /* block */)objectCallback;
- (id)protocol;

@end
