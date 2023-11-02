
@interface NRLoggingXPCProxy : NSProxy {
    id  _proxy;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
