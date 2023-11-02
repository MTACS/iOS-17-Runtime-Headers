
@interface IDSKeyTransparencyManager : NSObject {
    NSDictionary * _applicationToVerificationInfoProviders;
}

@property (nonatomic, retain) NSDictionary *applicationToVerificationInfoProviders;

- (void).cxx_destruct;
- (id)applicationToVerificationInfoProviders;
- (void)fetchKTRegistrationStatusWithCompletion:(id /* block */)arg1;
- (void)getKeyTransparencyOptInEligiblityForApplication:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (void)peerVerificationFinishedWithResults:(id)arg1;
- (void)registrationDataNeedsUpdate;
- (void)sendOptInUpdateForApplications:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendOptInUpdateForApplicationsOptInState:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendOptInUpdateRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setApplicationToVerificationInfoProviders:(id)arg1;
- (id)verificationInfoProviderForApplication:(id)arg1;
- (id)verificationInfoProviderIdForApplication:(id)arg1;

@end
