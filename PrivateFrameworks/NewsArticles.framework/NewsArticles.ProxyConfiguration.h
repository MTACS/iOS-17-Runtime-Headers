
@interface NewsArticles.ProxyConfiguration : NSObject <SXProxyConfiguration> {
    void embedProxyConfiguration;
}

@property (nonatomic, readonly) NSString *proxyAutoConfigScript;
@property (nonatomic, readonly) NSString *proxyHost;
@property (nonatomic, readonly) bool usePrivateRelay;

- (void).cxx_destruct;
- (id)init;
- (id)proxyAutoConfigScript;
- (id)proxyHost;
- (bool)usePrivateRelay;

@end
