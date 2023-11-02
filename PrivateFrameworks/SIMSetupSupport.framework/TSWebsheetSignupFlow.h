
@interface TSWebsheetSignupFlow : TSSIMSetupFlow <TSEntitlementJSHandlerDelegate, TSSIMSetupFlowDelegate, UINavigationControllerDelegate> {
    CoreTelephonyClient * _client;
    NSString * _iccid;
    CTPlan * _plan;
    NSDictionary * _postdata;
    unsigned long long  _requestType;
    bool  _skipIntroPaneForWebsheetFlow;
    NSString * _websheetURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createURLRequest:(id /* block */)arg1;
- (void)_showFailureAlert:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)_translateRequestType:(id)arg1;
- (void)accountCancelled;
- (void)accountPendingRelease;
- (void)appBackgrounded;
- (void)appForegrounded;
- (void)dealloc;
- (void)didPurchasePlanSuccessfullyWithCarrier:(id)arg1 mnc:(id)arg2 gid1:(id)arg3 gid2:(id)arg4 state:(id)arg5;
- (void)didPurchasePlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5 state:(id)arg6;
- (void)didTransferPlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 srcIccid:(id)arg5 alternateSDMP:(id)arg6 state:(id)arg7;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id)getWebsheetViewController;
- (id)init;
- (id)initWithIccid:(id)arg1;
- (id)initWithPlan:(id)arg1;
- (id)initWithRequestType:(unsigned long long)arg1 skipIntroPaneForWebsheetFlow:(bool)arg2 websheetURL:(id)arg3 postdata:(id)arg4;
- (id)nextViewControllerFrom:(id)arg1;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)viewControllerDidComplete:(id)arg1;

@end
