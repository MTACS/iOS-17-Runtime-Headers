
@interface PKPaymentSetupAssistantController : PKPaymentSetupAssistantCoreController {
    PKSetupAssistantContext * _setupAssistantContext;
}

@property (nonatomic, retain) PKSetupAssistantContext *setupAssistantContext;

- (void).cxx_destruct;
- (void)_bridgeStartingViewControllerForPaymentSetupContext:(long long)arg1 completion:(id /* block */)arg2;
- (bool)_isExpressSetupAssistant;
- (void)_phoneStartingViewControllerForPaymentSetupContext:(long long)arg1 completion:(id /* block */)arg2;
- (void)_setupAssistantViewControllerWithCompletion:(id /* block */)arg1;
- (id)initWithSetupAssistant:(unsigned long long)arg1 setupAssistantContext:(id)arg2;
- (id)initWithSetupAssistantContext:(id)arg1;
- (bool)isFollowupNeededReturningRequirements:(unsigned long long*)arg1;
- (void)prepareForPresentationWithCompletion:(id /* block */)arg1;
- (void)setSetupAssistantContext:(id)arg1;
- (id)setupAssistantContext;
- (bool)setupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1;
- (void)setupAssistantViewControllerWithCompletion:(id /* block */)arg1;
- (void)setupFlowWithCompletion:(id /* block */)arg1;

@end
