
@interface SBBiometricsService : NSObject <SBSystemServiceServerBiometricsDelegate> {
    SBUIBiometricResource * _biometricResource;
    FBServiceClientAuthenticator * _unlockCredentialAuthenticator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 fetchUnlockCredentialSet:(id /* block */)arg3;

@end
