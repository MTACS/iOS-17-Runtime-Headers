
@interface SBNonInteractiveDisplayModeResolver : NSObject <SBWindowingModeResolver> {
    SBApplicationController * _applicationController;
    <SBDisplayWindowingModeResolverDelegate> * _delegate;
    bool  _haveAuthenticatedOnce;
    SBWindowScene * _monitoredWindowScene;
    bool  _nonInteractiveModeAvailableOnPhysicalDisplay;
    FBSDisplayIdentity * _rootDisplayIdentity;
    <SBFAuthenticationStatusProvider> * _userAuthenticationProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBDisplayWindowingModeResolverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayWindowingMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isWindowingModeAvailable;
@property (nonatomic, readonly) FBSDisplayIdentity *rootDisplayIdentity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appProcessStateDidChange:(id)arg1;
- (void)_authenicationStateDidChange:(id)arg1;
- (void)_evaluateAndNotifyOfStateChanges;
- (id)delegate;
- (long long)displayWindowingMode;
- (id)initWithRootDisplay:(id)arg1 applicationController:(id)arg2 userAuthenticationProvider:(id)arg3 monitoredWindowScene:(id)arg4;
- (bool)isWindowingModeAvailable;
- (id)rootDisplayIdentity;
- (void)setDelegate:(id)arg1;

@end
