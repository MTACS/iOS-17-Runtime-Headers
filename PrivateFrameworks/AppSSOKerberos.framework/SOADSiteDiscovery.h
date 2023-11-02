
@interface SOADSiteDiscovery : NSObject {
    SODNSSRVQuery * _dns;
    NSOperationQueue * _queue;
    NSString * _realm;
}

@property (retain) SODNSSRVQuery *dns;
@property (nonatomic, retain) NSOperationQueue *queue;
@property (nonatomic, retain) NSString *realm;

- (void).cxx_destruct;
- (void)discoverADInfoUsingSourceAppBundleIdentifier:(id)arg1 auditTokenData:(id)arg2 requireTLSForLDAP:(bool)arg3 withCompletion:(id /* block */)arg4;
- (id)dns;
- (id)initWithRealm:(id)arg1;
- (void)performLDAPPingUsingSite:(id)arg1 bundleIdentifier:(id)arg2 auditTokenData:(id)arg3 requireTLSForLDAP:(bool)arg4 inBackground:(bool)arg5 completion:(id /* block */)arg6;
- (void)performNetworkConnectionUsingService:(id)arg1 orHost:(id)arg2 port:(unsigned short)arg3 inBackground:(bool)arg4 completion:(id /* block */)arg5;
- (id)queue;
- (id)realm;
- (void)setDns:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRealm:(id)arg1;

@end
