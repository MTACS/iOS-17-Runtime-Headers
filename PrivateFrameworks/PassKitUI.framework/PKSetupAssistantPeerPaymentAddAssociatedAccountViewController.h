
@interface PKSetupAssistantPeerPaymentAddAssociatedAccountViewController : PKPeerPaymentAddAssociatedAccountViewController <PKPeerPaymentAssociatedAccountSetupDelegate, PKSetupAssistantStep> {
    <PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate> * _setupAssistantDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1;
+ (bool)bridgeSetupAssistantNeedsToRunWithContext:(id)arg1 returningRequirements:(unsigned long long*)arg2;
+ (id)defaultWebServiceForContext:(long long)arg1;
+ (bool)setupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1;

- (void).cxx_destruct;
- (void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)arg1;
- (void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(bool)arg1 updatedAccount:(id)arg2 forFamilyMember:(id)arg3;
- (id)initWithPairingFamilyMember:(id)arg1 parentFamilyMember:(id)arg2 webService:(id)arg3 passLibraryDataProvider:(id)arg4 delegate:(id)arg5 context:(long long)arg6;
- (void)preflightWithCompletion:(id /* block */)arg1;

@end
