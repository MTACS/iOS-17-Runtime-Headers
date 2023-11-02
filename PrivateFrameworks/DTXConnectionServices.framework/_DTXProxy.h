
@interface _DTXProxy : NSObject {
    DTXProxyChannel * _proxyChannel;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithChannel:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
