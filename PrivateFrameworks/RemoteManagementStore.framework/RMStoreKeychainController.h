
@interface RMStoreKeychainController : NSObject

+ (void)removeTrustForCertificateRef:(id)arg1 configurationKey:(id)arg2 fullTrust:(bool)arg3 scope:(long long)arg4 completionHandler:(id /* block */)arg5;
+ (void)setTrustForCertificateRef:(id)arg1 configurationKey:(id)arg2 fullTrust:(bool)arg3 scope:(long long)arg4 completionHandler:(id /* block */)arg5;

@end
