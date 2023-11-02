
@interface PKPaymentSetupAssistantCoreController : NSObject {
    unsigned long long  _preflightState;
    PKPaymentProvisioningController * _provisioningController;
    <PKPaymentSetupAssistantContextProtocol> * _setupAssistantContext;
}

@property (nonatomic, readonly) unsigned long long preflightState;
@property (nonatomic, readonly, retain) PKPaymentProvisioningController *provisioningController;

+ (id)requiredPaymentSetupFileURLs;

- (void).cxx_destruct;
- (id)_bridgeContextDefaultLocalCredential;
- (bool)_bridgeNeedsToRun:(unsigned long long*)arg1;
- (id)_defaultWebService;
- (void)_expressCardRemovalProvisioningContext:(id /* block */)arg1;
- (void)_expressSetupProvisioningContext:(id /* block */)arg1;
- (void)_extendedSetupAssistantNeedsToRunWithCompletion:(id /* block */)arg1;
- (bool)_hasManuallyAddedSecureElementPasses:(bool)arg1;
- (bool)_macNeedsToRun:(unsigned long long*)arg1;
- (id)_peerPaymentCredential;
- (bool)_phoneNeedsToRun:(unsigned long long*)arg1;
- (void)_preflightPaymentSetupProvisioningController:(id)arg1 completion:(id /* block */)arg2;
- (id)_provisioningContextWithProvisioningController:(id)arg1 setupAssistantCredentials:(id)arg2 maximumSelectable:(unsigned long long)arg3;
- (id)_provisioningControllerWithWebService:(id)arg1;
- (id)_setupAssistantCredentialForPaymentCredential:(id)arg1;
- (id)_setupAssistantCredentialForPaymentPass:(id)arg1;
- (bool)_setupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1;
- (void)_shouldRunAppleCashFlow:(bool*)arg1 shouldRunPaymentSetupFlow:(bool*)arg2 pairingFamilyMember:(id)arg3 pairingPeerPaymentAccount:(id)arg4 parentFamilyMember:(id)arg5 parentPeerPaymentAccount:(id)arg6;
- (unsigned long long)_specialCaseSEPassCountInPassLibrary:(id)arg1;
- (id)description;
- (id)initWithSetupAssistantContext:(id)arg1;
- (unsigned long long)preflightState;
- (id)provisioningController;

@end
