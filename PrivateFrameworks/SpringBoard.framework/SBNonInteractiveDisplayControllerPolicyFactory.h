
@interface SBNonInteractiveDisplayControllerPolicyFactory : NSObject <SBSceneHostingDisplayControllerPolicyFactory> {
    SBApplicationController * _applicationController;
    FBSceneManager * _fbSceneManager;
    SBWindowScene * _monitoredWindowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFBSceneManager:(id)arg1 monitoredWindowScene:(id)arg2 applicationController:(id)arg3;
- (id)policyForConnectingDisplay:(id)arg1;
- (void)transformDisplayConfiguration:(id)arg1 forControllersWithBuilder:(id)arg2;

@end
