
@protocol MFMailAccountProxyGenerator <NSObject>

@required

- (MFMailAccountProxy *)accountProxyContainingEmailAddress:(NSString *)arg1 includingInactive:(bool)arg2;
- (MFMailAccountProxy *)accountProxyContainingEmailAddress:(NSString *)arg1 includingInactive:(bool)arg2 originatingBundleID:(NSString *)arg3 sourceAccountManagement:(int)arg4;
- (NSArray *)activeAccountProxiesOriginatingBundleID:(NSString *)arg1 sourceAccountManagement:(int)arg2;
- (NSArray *)allAccountProxies;
- (MFMailAccountProxy *)defaultMailAccountProxyForDeliveryOriginatingBundleID:(NSString *)arg1 sourceAccountManagement:(int)arg2;

@end
