
@interface WLTransferCancellationViewController : WLOnboardingViewController {
    WLContext * _context;
    id /* block */  _resetBlock;
    WLWelcomeController * _welcomeController;
}

@property (nonatomic, copy) id /* block */ resetBlock;

- (void).cxx_destruct;
- (void)_detailTapped:(id)arg1;
- (void)_reset;
- (id)initWithWelcomeController:(id)arg1 context:(id)arg2;
- (id /* block */)resetBlock;
- (void)setResetBlock:(id /* block */)arg1;

@end
