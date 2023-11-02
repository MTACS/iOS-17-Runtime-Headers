
@interface SBSystemActionCoachingController : NSObject <PTSettingsKeyObserver, SBSystemActionCoachingHUDViewControllerDelegate, SBSystemActionPreviewCoordinatorObserving, SBSystemGestureRecognizerDelegate> {
    SBHUDController * _HUDController;
    SBApplicationController * _applicationController;
    SBFailingSystemGestureRecognizer * _dismissGestureRecognizer;
    SBDoNotDisturbStateMonitor * _doNotDisturbStateMonitor;
    SBFlashlightActivityManager * _flashlightActivityManager;
    <SBSystemActionCoachingPolicy> * _policy;
    SBRingerControl * _ringerControl;
    SBSystemActionCoachingSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_backlightLevelChanged:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_volumeButtonPressed:(id)arg1;
- (void)dealloc;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)systemActionCoachingHUDViewController:(id)arg1 didBeginTransitionToState:(long long)arg2;
- (void)systemActionPreviewCoordinator:(id)arg1 didBeginPreview:(id)arg2 forAction:(id)arg3;
- (void)systemActionPreviewCoordinator:(id)arg1 didEndPreview:(id)arg2 forAction:(id)arg3 withResult:(unsigned long long)arg4;
- (void)systemActionPreviewCoordinator:(id)arg1 didInvalidateExpansionOfPreview:(id)arg2 forAction:(id)arg3 withResult:(unsigned long long)arg4;
- (id)viewForSystemGestureRecognizer:(id)arg1;

@end
