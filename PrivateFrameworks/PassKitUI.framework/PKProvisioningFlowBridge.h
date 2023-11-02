
@interface PKProvisioningFlowBridge : NSObject

+ (void)startInAppFlowWithNavController:(id)arg1 context:(id)arg2 addPassConfiguration:(id)arg3 completion:(id /* block */)arg4;
+ (void)startInAppFlowWithNavController:(id)arg1 context:(id)arg2 requestConfiguration:(id)arg3 phoneWebService:(id)arg4 watchWebService:(id)arg5 generateRequest:(id /* block */)arg6 onViewLoaded:(id /* block */)arg7 completion:(id /* block */)arg8;
+ (void)startManualEntryFlowWithNavController:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
+ (void)startPaymentSetupFlowWithNavController:(id)arg1 context:(id)arg2 mode:(long long)arg3 preflightCompletion:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)startProductManualEntryFlowWithNavController:(id)arg1 context:(id)arg2 product:(id)arg3 presentNavController:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)startProvisionToPurchaseFlowWithNavController:(id)arg1 context:(id)arg2 onFirstViewControllerShown:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)startSetupAssistantFlowWithContext:(id)arg1 allowManualEntry:(bool)arg2 onFirstViewControllerShown:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)startSetupAssistantFlowWithContext:(id)arg1 credentials:(id)arg2 onFirstViewControllerShown:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)startSetupAssistantFollowupFlowWithNavController:(id)arg1 context:(id)arg2 preflightCompletion:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)startShareRedemptionFlowWithNavController:(id)arg1 context:(id)arg2 invitation:(id)arg3 referralSource:(id)arg4 completion:(id /* block */)arg5;
+ (void)startShareableCredentialFlowWithNavController:(id)arg1 context:(id)arg2 credentials:(id)arg3 completion:(id /* block */)arg4;
+ (void)startVerificationFlowWithNavController:(id)arg1 context:(id)arg2 pass:(id)arg3 verificationController:(id)arg4 presentNavController:(id /* block */)arg5;

- (id)init;

@end
