
@interface TSRemotePlanSignUpFlow : TSSIMSetupFlow <TSEntitlementJSHandlerDelegate, TSSIMSetupFlowDelegate> {
    CoreTelephonyClient * _client;
    TSRemotePlanWebsheetContext * _remotePlanWebsheetContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) TSRemotePlanWebsheetContext *remotePlanWebsheetContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accountCancelled;
- (void)accountPendingRelease;
- (void)appBackgrounded;
- (void)appForegrounded;
- (void)dealloc;
- (void)didPurchasePlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5 state:(id)arg6;
- (void)didTransferPlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 srcIccid:(id)arg5 alternateSDMP:(id)arg6 state:(id)arg7;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id)initWithRemotePlanWebsheetContext:(id)arg1;
- (id)nextViewControllerFrom:(id)arg1;
- (id)remotePlanWebsheetContext;
- (void)setRemotePlanWebsheetContext:(id)arg1;

@end
