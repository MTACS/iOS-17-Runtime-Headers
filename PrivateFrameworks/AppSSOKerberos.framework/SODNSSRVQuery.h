
@interface SODNSSRVQuery : NSObject

- (id)init;
- (void)lookupHost:(id)arg1 port:(id)arg2 bundleIdentifier:(id)arg3 auditTokenData:(id)arg4 completion:(id /* block */)arg5;
- (id)lookupSRVWithQuery:(id)arg1 bundleIdentifier:(id)arg2 auditTokenData:(id)arg3;
- (void)lookupSRVWithQuery:(id)arg1 bundleIdentifier:(id)arg2 auditTokenData:(id)arg3 completion:(id /* block */)arg4;

@end
