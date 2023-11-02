
@interface SBFlashlightActivityManager : NSObject <SBFlashlightActivityElementDelegate, SBUIFlashlightObserver> {
    SBSystemActionCompoundPreviewAssertion * _compoundPreviewAssertion;
    <SAInvalidatable> * _flashlightActivityAssertion;
    SBFlashlightActivityElement * _flashlightActivityElement;
    SBUIFlashlightController * _flashlightController;
    <SAInvalidatable> * _flashlightUnavailableAlertAssertion;
    SBFlashlightAlertElement * _flashlightUnavailableAlertElement;
    bool  _shouldShowUIForFlashlightLevel;
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)flashlightActivityElementRequestsTogglingFlashlight:(id)arg1;
- (void)flashlightAvailabilityDidChange:(bool)arg1;
- (void)flashlightLevelDidChange:(unsigned long long)arg1;
- (void)flashlightOverheatedDidChange:(bool)arg1;

@end
