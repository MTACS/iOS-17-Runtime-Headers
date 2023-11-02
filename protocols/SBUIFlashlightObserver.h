
@protocol SBUIFlashlightObserver <NSObject>

@required

- (void)flashlightAvailabilityDidChange:(bool)arg1;
- (void)flashlightLevelDidChange:(unsigned long long)arg1;

@optional

- (void)flashlightOverheatedDidChange:(bool)arg1;

@end
