
@interface SEProxyWithManagerSession : NSObject <SEProxyInterface> {
    NSString * _seid;
    NFSecureElementManagerSession * _session;
}

- (void).cxx_destruct;
- (oneway void)transceive:(id)arg1 callback:(id /* block */)arg2;

@end
