
@interface TSCellularPlanManagerCache : NSObject {
    NSArray * _cachedPlanItems;
    NSArray * _danglingPlanItems;
    NSError * _lastError;
    <TSCellularPlanManagerCacheDelegate> * delegate;
}

@property (retain) NSArray *cachedPlanItems;
@property (retain) NSArray *danglingPlanItems;
@property (nonatomic) <TSCellularPlanManagerCacheDelegate> *delegate;
@property (retain) NSError *lastError;
@property (readonly) NSArray *planItems;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getValidatedPlanItemFor:(id)arg1;
- (void)_initializePlanItems;
- (void)_updateCachedPlanItems;
- (void)_updateLocalCachedPlanItems:(id)arg1;
- (void)addNewPlanWithAddress:(id)arg1 matchingId:(id)arg2 confirmationCode:(id)arg3 userConsent:(long long)arg4 completion:(id /* block */)arg5;
- (void)addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2 userConsentResponse:(long long)arg3 completion:(id /* block */)arg4;
- (id)cachedPlanItems;
- (long long)calculateInstallConsentTextTypeFor:(id)arg1;
- (id)danglingPlanItems;
- (void)dealloc;
- (id)delegate;
- (void)didEnablePlanItems:(id)arg1;
- (void)didPurchasePlanForCarrier:(id)arg1 mnc:(id)arg2 gid1:(id)arg3 gid2:(id)arg4 state:(id)arg5;
- (void)didPurchasePlanForEid:(id)arg1 iccid:(id)arg2 smdpURL:(id)arg3 state:(id)arg4;
- (void)didTransferPlanForEid:(id)arg1 iccid:(id)arg2 srcIccid:(id)arg3 smdpURL:(id)arg4 state:(id)arg5;
- (id)getDanglingPlanItems;
- (id)getPredefinedLabels;
- (id)getShortLabelsForLabels:(id)arg1;
- (id)getSubscriptionContextUUIDforPlan:(id)arg1;
- (void)hasInstallingPlanOrUserPlan:(id /* block */)arg1;
- (id)init;
- (id)lastError;
- (id)planItems;
- (void)planItemsWithCompletion:(id /* block */)arg1;
- (void)provideUserResponse:(long long)arg1 confirmationCode:(id)arg2;
- (id)remapSimLabel:(id)arg1 to:(id)arg2;
- (void)resetDelegate:(id)arg1;
- (void)resumePlanProvisioning:(bool)arg1 userConsent:(long long)arg2;
- (void)selectPlanForData:(id)arg1;
- (void)selectPlanForVoice:(id)arg1;
- (void)selectPlansForIMessage:(id)arg1;
- (void)sendUserResponse:(unsigned long long)arg1 confirmationCode:(id)arg2;
- (void)setCachedPlanItems:(id)arg1;
- (void)setDanglingPlanItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)setLabelForPlan:(id)arg1 label:(id)arg2;
- (void)setLastError:(id)arg1;
- (void)shouldShowPlanSetupWithCompletion:(id /* block */)arg1;

@end
