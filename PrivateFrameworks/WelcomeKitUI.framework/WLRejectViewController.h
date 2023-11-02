
@interface WLRejectViewController : WLOnboardingViewController {
    id /* block */  _retryBlock;
    WLWelcomeController * _welcomeController;
}

@property (nonatomic, copy) id /* block */ retryBlock;

- (void).cxx_destruct;
- (void)_retry;
- (id)initWithWelcomeController:(id)arg1;
- (id /* block */)retryBlock;
- (void)setRetryBlock:(id /* block */)arg1;

@end
