
@interface FCEmbedProxyConfiguration : NSObject {
    NSString * _proxyAutoConfig;
    NSString * _proxyHost;
    bool  _usePrivateRelay;
}

@property (nonatomic, readonly) NSString *proxyAutoConfig;
@property (nonatomic, readonly) NSString *proxyHost;
@property (nonatomic, readonly) bool usePrivateRelay;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)proxyAutoConfig;
- (id)proxyHost;
- (bool)usePrivateRelay;

@end
