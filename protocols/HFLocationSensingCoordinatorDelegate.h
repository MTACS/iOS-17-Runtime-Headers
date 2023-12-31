
@protocol HFLocationSensingCoordinatorDelegate <NSObject>

@optional

- (void)coordinator:(HFLocationSensingCoordinator *)arg1 homeSensingStatusDidChange:(bool)arg2;
- (void)coordinator:(HFLocationSensingCoordinator *)arg1 locationSensingAvailabilityDidChange:(bool)arg2;

@end
