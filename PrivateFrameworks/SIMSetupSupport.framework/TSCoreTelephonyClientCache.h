
@interface TSCoreTelephonyClientCache : NSObject {
    CoreTelephonyClient * _client;
    bool  _isEOnly;
}

@property bool isEOnly;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)bootstrapPlanTransferUsingMessageSession:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelTransferPlan:(id)arg1 fromDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)convertPhysicalSIMToeSIMWithCompletion:(id /* block */)arg1;
- (bool)deviceSupportsHydra;
- (void)getCarrierSetupWithCompletion:(id /* block */)arg1;
- (id)getCoreTelephonyClient;
- (void)getPlanTransferCredentials:(id)arg1 completion:(id /* block */)arg2;
- (void)getSubscriptionInfo:(id /* block */)arg1;
- (bool)getTransferCapability:(unsigned long long)arg1;
- (void)getWebsheetInfoForPlan:(id)arg1 inBuddy:(bool)arg2 completion:(id /* block */)arg3;
- (void)hideTransferPlan:(id)arg1 fromDevice:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)installPendingPlan:(id)arg1 completion:(id /* block */)arg2;
- (void)installPendingPlanList:(id)arg1 completion:(id /* block */)arg2;
- (void)isAnyPlanOfTransferCapability:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (bool)isEOnly;
- (bool)isEmbeddedSIMOnlyConfig;
- (void)pendingInstallItemsWithCompletion:(id /* block */)arg1;
- (void)setDataFallbackEnabled:(bool)arg1 forIccid:(id)arg2;
- (void)setIsEOnly:(bool)arg1;
- (void)submitPlanSetupDetails:(id)arg1;
- (void)submitSimSetupUsage:(id)arg1;
- (void)transferPlanListWithCompletion:(id /* block */)arg1;
- (void)transferPlanWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)transferPlansWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)updateSecureIntentData:(id)arg1;
- (bool)usingBootstrapDataService;

@end
