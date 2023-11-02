
@interface SBSystemApertureZStackPolicyAssistant : NSObject <SBDeviceApplicationSceneHandleObserver, SBHomeGrabberViewObserver> {
    NSSet * _associatedBundleIdentifiersToSuppressInSystemAperture;
    NSSet * _associatedSceneIdentifiersToSuppressInSystemAperture;
    <SBSystemApertureZStackPolicyAssistantDelegate> * _delegate;
    SBHomeGrabberView * _foregroundExclusiveHomeGrabberView;
    SBDeviceApplicationSceneHandle * _foregroundExclusiveSceneHandle;
    bool  _suppressSystemApertureForSystemChromeSuppression;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)homeGrabberViewDidUpdateHidden:(id)arg1;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;

@end
