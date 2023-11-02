
@interface SFDeviceOperationHandlerCDPSetup : NSObject <CDPStateUIProvider> {
    NSString * _altDSIDNeedingRepair;
    CDPContext * _cdpContext;
    CDPStateController * _cdpController;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _failIfCDPNotEnabled;
    bool  _invalidateCalled;
    id /* block */  _responseHandler;
    SFSession * _sfSession;
}

@property (nonatomic, copy) NSString *altDSIDNeedingRepair;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) bool failIfCDPNotEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFSession *sfSession;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_handleCDP;
- (void)_handleCDPSetupRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_repairCDP;
- (void)activate;
- (id)altDSIDNeedingRepair;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForBeneficiaryAccessKeyWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(bool)arg2 numericLength:(id)arg3 isRandom:(bool)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(bool)arg3 validator:(id)arg4;
- (void)cdpRecoveryFlowContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 validator:(id)arg3;
- (id)dispatchQueue;
- (bool)failIfCDPNotEnabled;
- (id)init;
- (void)invalidate;
- (void)setAltDSIDNeedingRepair:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFailIfCDPNotEnabled:(bool)arg1;
- (void)setSfSession:(id)arg1;
- (id)sfSession;

@end
