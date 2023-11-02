
@interface RemoteManagement.RMManagedTrustStore : NSObject

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (bool)removeTrustForCertificateRef:(id)arg1 configurationKey:(id)arg2 fullTrust:(bool)arg3 scope:(long long)arg4 persona:(id)arg5 error:(id*)arg6;
- (bool)setTrustForCertificateRef:(id)arg1 configurationKey:(id)arg2 fullTrust:(bool)arg3 scope:(long long)arg4 persona:(id)arg5 error:(id*)arg6;

@end
