
@protocol SXProxyConfiguration <NSObject>

@required

- (NSString *)proxyAutoConfigScript;
- (NSString *)proxyHost;
- (bool)usePrivateRelay;

@end
