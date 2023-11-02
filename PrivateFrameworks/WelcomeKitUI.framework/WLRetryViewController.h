
@interface WLRetryViewController : WLOnboardingViewController <OBSetupAssistantSupport> {
    id /* block */  _retryBlock;
    WLWelcomeController * _welcomeController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ retryBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_retry:(id)arg1;
- (id)initWithWelcomeController:(id)arg1;
- (id /* block */)retryBlock;
- (void)setRetryBlock:(id /* block */)arg1;

@end
