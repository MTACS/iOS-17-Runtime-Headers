
@interface WLCompletedViewController : WLOnboardingViewController <OBSetupAssistantSupport> {
    WLContext * _context;
    id /* block */  _continueHandler;
    WLWelcomeController * _welcomeController;
}

@property (nonatomic, copy) id /* block */ continueHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_continueTapped:(id)arg1;
- (void)_detailTapped:(id)arg1;
- (id /* block */)continueHandler;
- (id)initWithWelcomeController:(id)arg1 context:(id)arg2 imported:(bool)arg3;
- (void)setContinueHandler:(id /* block */)arg1;

@end
