
@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentSetupHeroViewController {
    PKPaymentSetupAssistantDelegateProxy * _delegateProxy;
    PKPaymentSetupAssistantCoreController * _setupAssistantCoreController;
}

@property (nonatomic, readonly) NSArray *requiredPaymentSetupFileURLs;

+ (bool)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1;
+ (bool)bridgeSetupAssistantNeedsToRunWithContext:(id)arg1 returningRequirements:(unsigned long long*)arg2;
+ (id)defaultWebServiceForContext:(long long)arg1;
+ (bool)setupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1;

- (void).cxx_destruct;
- (void)_setUserInteractionEnabled:(bool)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithPaymentWebService:(id)arg1 context:(long long)arg2 delegate:(id)arg3;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)requiredPaymentSetupFileURLs;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
