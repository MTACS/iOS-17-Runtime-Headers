
@interface TSCarrierSignupFlow : TSSIMSetupFlow <TSEntitlementJSHandlerDelegate, TSSIMSetupFlowDelegate> {
    TSBuddyMLController * _buddyMLController;
    CoreTelephonyClient * _client;
    CTPlan * _plan;
    NSDictionary * _postdata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_handleCarrierInfoWithUrl:(id)arg1 postdata:(id)arg2 type:(id)arg3 error:(id)arg4;
- (void)dealloc;
- (void)didPurchasePlanSuccessfullyWithCarrier:(id)arg1 mnc:(id)arg2 gid1:(id)arg3 gid2:(id)arg4 state:(id)arg5;
- (void)didPurchasePlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5 state:(id)arg6;
- (id)initWithPlan:(id)arg1;
- (id)nextViewControllerFrom:(id)arg1;
- (void)showFirstViewControllerWithHostController:(id)arg1 completion:(id /* block */)arg2;
- (void)viewControllerDidComplete:(id)arg1;

@end
