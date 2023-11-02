
@protocol SBBacklightControllerObserver <NSObject>

@optional

- (void)backlightController:(SBBacklightController *)arg1 didAnimateBacklightToFactor:(float)arg2 source:(long long)arg3;
- (void)backlightController:(SBBacklightController *)arg1 didTransitionToBacklightState:(long long)arg2 source:(long long)arg3;
- (void)backlightController:(SBBacklightController *)arg1 didUpdateDigitizerDisabled:(bool)arg2 tapToWakeEnabled:(bool)arg3;
- (void)backlightController:(SBBacklightController *)arg1 willAnimateBacklightToFactor:(float)arg2 source:(long long)arg3;
- (void)backlightController:(SBBacklightController *)arg1 willTransitionToBacklightState:(long long)arg2 source:(long long)arg3;

@end
