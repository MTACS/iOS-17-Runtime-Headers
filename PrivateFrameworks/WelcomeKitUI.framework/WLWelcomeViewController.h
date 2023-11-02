
@interface WLWelcomeViewController : WLOnboardingViewController <OBSetupAssistantSupport> {
    id /* block */  _continueHandler;
    bool  _qrcodeLoaded;
    WLWelcomeController * _welcomeController;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) id /* block */ continueHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ resetHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_continueTapped:(id)arg1;
- (id)_initWithForceUITestMode:(bool)arg1 forceUITestModeDownloadError:(bool)arg2;
- (void)_qrcodeTapped:(id)arg1;
- (id /* block */)completionHandler;
- (id /* block */)continueHandler;
- (void)dealloc;
- (id)init;
- (id)initForUITestWithForceDownloadError:(bool)arg1;
- (id /* block */)resetHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setContinueHandler:(id /* block */)arg1;
- (void)setResetHandler:(id /* block */)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
