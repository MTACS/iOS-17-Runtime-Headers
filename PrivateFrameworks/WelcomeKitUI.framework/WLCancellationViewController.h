
@interface WLCancellationViewController : WLOnboardingViewController {
    id /* block */  _continueBlock;
    id /* block */  _retryBlock;
    WLWelcomeController * _welcomeController;
}

@property (nonatomic, copy) id /* block */ continueBlock;
@property (nonatomic, copy) id /* block */ retryBlock;

- (void).cxx_destruct;
- (void)_continue;
- (void)_retry;
- (id /* block */)continueBlock;
- (id)initWithWelcomeController:(id)arg1;
- (id /* block */)retryBlock;
- (void)setContinueBlock:(id /* block */)arg1;
- (void)setRetryBlock:(id /* block */)arg1;

@end
