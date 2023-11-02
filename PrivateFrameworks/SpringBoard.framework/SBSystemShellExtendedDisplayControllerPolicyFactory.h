
@interface SBSystemShellExtendedDisplayControllerPolicyFactory : NSObject <SBSceneHostingDisplayControllerPolicyFactory> {
    SBExternalDisplayDefaults * _externalDisplayDefaults;
    SBExternalDisplayService * _externalDisplayService;
    SBMousePointerManager * _mousePointerManager;
    SBExternalDisplayRuntimeAvailabilitySettings * _runtimeAvailabilitySettings;
    FBSceneManager * _sceneManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithExternalDisplayService:(id)arg1 externalDisplayDefaults:(id)arg2 mousePointerManager:(id)arg3 runtimeAvailabilitySettings:(id)arg4 sceneManager:(id)arg5;
- (id)policyForConnectingDisplay:(id)arg1;
- (void)transformDisplayConfiguration:(id)arg1 forControllersWithBuilder:(id)arg2;

@end
