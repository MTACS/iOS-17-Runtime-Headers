
@interface SXWebsiteDataStoreFactory : NSObject <SXWebsiteDataStoreFactory> {
    SXProxyConfiguration * _proxyConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SXProxyConfiguration *proxyConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createWebsiteDataStore;
- (id)initWithProxyConfiguration:(id)arg1;
- (id)proxyConfiguration;

@end
