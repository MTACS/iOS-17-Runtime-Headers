
@interface APProxySessionConfigurationProvider : NSObject {
    NSURLSessionConfiguration * _connectProxyConfig;
    NSURL * _defaultProxyURL;
    APUnfairLock * _lock;
    NSArray * _protocolClasses;
    NSURL * _proxyURL;
}

@property (nonatomic, retain) NSURL *defaultProxyURL;
@property (nonatomic, readonly) APUnfairLock *lock;
@property (nonatomic, retain) NSArray *protocolClasses;
@property (nonatomic, retain) NSURL *proxyURL;

- (void).cxx_destruct;
- (id)_createConnectProxyConfig;
- (void)addProtocolClasses:(id)arg1;
- (id)connectProxyConfig;
- (id)defaultProxyURL;
- (id)initWithDefaultProxyURL:(id)arg1;
- (id)lock;
- (id)protocolClasses;
- (id)proxyURL;
- (void)setDefaultProxyURL:(id)arg1;
- (void)setProtocolClasses:(id)arg1;
- (void)setProxyURL:(id)arg1;

@end
