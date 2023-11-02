
@interface SRAuthorizationPromptPresentationController : NSObject <SRRemoteAuthorizationPromptViewControllerDelegate> {
    id /* block */  _completionHandler;
    NSError * _error;
    bool  _hostNavigationBarHidden;
    bool  _presenting;
    long long  _reason;
    UIViewController<SRRemoteAuthorizationPromptViewController> * _viewController;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hostNavigationBarHidden;
@property (getter=isPresenting, nonatomic) bool presenting;
@property (nonatomic) long long reason;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController<SRRemoteAuthorizationPromptViewController> *viewController;

+ (void)initialize;
+ (id)sharedInstance;

- (void)authorizationRequestCompleted;
- (void)authorizationRequestDidDisappear;
- (void)authorizationRequestFailedWithError:(id)arg1;
- (void)authorizationRequestWillDisappear;
- (void)authorizationUIReadyForDisplayModally:(bool)arg1;
- (void)completePromptWithError:(id)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)error;
- (bool)hostNavigationBarHidden;
- (bool)isPresenting;
- (bool)isViewControllerPresentedModally;
- (id)navigationControllerFromRoot:(id)arg1;
- (bool)presentAnyViewController:(id)arg1 reason:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)presentAppsAndStudiesPromptViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)presentFirstRunOnboardingViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)presentMigrationPromptViewController:(id)arg1 withDesiredServices:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)presentPromptViewController:(id)arg1 withDesiredServices:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)presentResearchDataViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)presentStudyAuthorizationPromptViewController:(id)arg1 bundlePath:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)presentationAnchor;
- (id)presentingViewControllerFromRoot:(id)arg1;
- (long long)reason;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setHostNavigationBarHidden:(bool)arg1;
- (void)setPresenting:(bool)arg1;
- (void)setReason:(long long)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (void)viewControllerCleanUp;

@end
