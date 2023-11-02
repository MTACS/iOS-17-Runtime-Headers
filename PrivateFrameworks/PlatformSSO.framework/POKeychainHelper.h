
@interface POKeychainHelper : NSObject

- (int)addTokens:(id)arg1 metaData:(id)arg2 toKeychainForService:(id)arg3 username:(id)arg4;
- (int)addTokens:(id)arg1 metaData:(id)arg2 toKeychainForService:(id)arg3 username:(id)arg4 system:(bool)arg5;
- (int)removeTokensFromKeychainWithService:(id)arg1 username:(id)arg2;
- (bool)retrieveCertAndKeyForTokenId:(id)arg1 context:(id)arg2 forSigning:(bool)arg3 certificate:(struct __SecCertificate {}**)arg4 privateKey:(struct __SecKey {}**)arg5;
- (bool)retrieveIdentityForTokenId:(id)arg1 context:(id)arg2 forSigning:(bool)arg3 identity:(struct __SecIdentity {}**)arg4;
- (int)retrieveTokensFromKeychainForService:(id)arg1 username:(id)arg2 returningTokens:(id*)arg3 metaData:(id*)arg4;

@end
