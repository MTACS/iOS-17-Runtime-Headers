
@interface _MPMiddlewareChainBuilderProxy : NSProxy {
    Protocol * _protocol;
}

+ (id)allocWithProtocol:(id)arg1;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
