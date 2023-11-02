
@interface CDPToolFakeUIProvider : NSObject <CDPStateUIProvider> {
    AKInheritanceAccessKey * _accessKey;
    NSString * _icsc;
    NSString * _localSecret;
    NSString * _recoveryKey;
    NSString * _remoteSecret;
}

@property (nonatomic, copy) AKInheritanceAccessKey *accessKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *icsc;
@property (nonatomic, copy) NSString *localSecret;
@property (nonatomic, copy) NSString *recoveryKey;
@property (nonatomic, copy) NSString *remoteSecret;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessKey;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForBeneficiaryAccessKeyWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(bool)arg2 numericLength:(id)arg3 isRandom:(bool)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForRecoveryKeyWithSecretValidator:(id)arg2 completion:(id /* block */)arg3;
- (void)cdpContext:(id)arg1 promptForRecoveryKeyWithValidator:(id)arg2 completion:(id /* block */)arg3;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(bool)arg3 validator:(id)arg4;
- (void)cdpRecoveryFlowContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 validator:(id)arg3;
- (id)icsc;
- (id)localSecret;
- (id)recoveryKey;
- (id)remoteSecret;
- (void)setAccessKey:(id)arg1;
- (void)setIcsc:(id)arg1;
- (void)setLocalSecret:(id)arg1;
- (void)setRecoveryKey:(id)arg1;
- (void)setRemoteSecret:(id)arg1;

@end
