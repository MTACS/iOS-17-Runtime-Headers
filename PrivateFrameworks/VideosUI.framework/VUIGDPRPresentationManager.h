
@interface VUIGDPRPresentationManager : NSObject {
    VUIAppContext * _appContext;
    UINavigationController * _navigationController;
}

@property (nonatomic) VUIAppContext *appContext;
@property (nonatomic, retain) UINavigationController *navigationController;

+ (void)_performRequestsIfNeeded;
+ (id)_sharedInstance;
+ (void)acceptGDPRAndSyncWithServers:(id /* block */)arg1;
+ (void)checkGDPRConsentAndPerformRequests:(id /* block */)arg1;
+ (bool)shouldShowWelcomeScreen;
+ (bool)showGDPRWelcomeScreen:(id)arg1;
+ (void)showOfflineGDPRWelcomeScreen;

- (void).cxx_destruct;
- (id)_currentWindowRootViewController;
- (void)_dismissAllModalsIfPresent:(id)arg1;
- (void)_handleContinueButton;
- (void)_handleOfflineContinueButton;
- (void)_showIOSWelcomeControllerWithAppContext:(id)arg1 offline:(bool)arg2;
- (void)accept:(id)arg1;
- (id)appContext;
- (bool)isShowing;
- (id)navigationController;
- (void)setAppContext:(id)arg1;
- (void)setNavigationController:(id)arg1;

@end
