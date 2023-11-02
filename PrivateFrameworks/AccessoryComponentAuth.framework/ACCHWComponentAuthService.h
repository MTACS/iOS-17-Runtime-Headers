
@interface ACCHWComponentAuthService : NSObject <ACCHWComponentAuthServiceProtocol>

- (void)_authenticateModuleWithChallenge:(id)arg1 completionHandler:(id /* block */)arg2 moduleType:(int)arg3 updateRegistry:(bool)arg4;
- (unsigned int)_findModuleAuthService:(int)arg1 withAuthFlags:(unsigned int*)arg2;
- (bool)_getForVeridianFDRData:(id)arg1 intermediateCert:(id*)arg2 leafCert:(id*)arg3;
- (void)_notifyComponentAuthFailure;
- (int)_signChallenge:(id)arg1;
- (int)_verifyBatteryMatch:(id)arg1;
- (int)_verifyCertificate:(id)arg1;
- (bool)_verifyDeviceIDSN:(unsigned int)arg1;
- (bool)_verifyDeviceInfo:(unsigned int)arg1;
- (int)_verifyModuleCertificate:(id)arg1 forModuleType:(int)arg2;
- (bool)_verifyModuleFDR:(id)arg1 forModuleType:(int)arg2;
- (int)_verifySignature:(id)arg1;
- (void)authenticateBatteryWithChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)authenticateTouchControllerWithChallenge:(id)arg1 completionHandler:(id /* block */)arg2 updateRegistry:(bool)arg3;
- (void)authenticateVeridianWithChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)signVeridianChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)verifyBatteryMatch:(id)arg1 completionHandler:(id /* block */)arg2;

@end
