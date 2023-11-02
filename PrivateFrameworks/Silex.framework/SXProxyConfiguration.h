
@interface SXProxyConfiguration : NSObject <SXProxyConfiguration> {
    NSString * _proxyAutoConfigScript;
    NSString * _proxyHost;
    bool  usePrivateRelay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *proxyAutoConfigScript;
@property (nonatomic, readonly, copy) NSString *proxyHost;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usePrivateRelay;

+ (id)direct;

- (void).cxx_destruct;
- (id)initWithHost:(id)arg1;
- (id)initWithProxyAutoConfigScript:(id)arg1;
- (id)proxyAutoConfigScript;
- (id)proxyHost;
- (bool)usePrivateRelay;

@end
