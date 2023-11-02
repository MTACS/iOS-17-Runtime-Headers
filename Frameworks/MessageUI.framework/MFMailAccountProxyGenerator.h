
@interface MFMailAccountProxyGenerator : NSObject <MFMailAccountProxyGenerator> {
    bool  _allowsRestrictedAccounts;
    _MFMailAccountProxySource * _proxySource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(bool)arg2;
- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(bool)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4;
- (id)activeAccountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)allAccountProxies;
- (id)defaultMailAccountProxyForDeliveryOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)init;
- (id)initWithAllowsRestrictedAccounts:(bool)arg1;

@end
