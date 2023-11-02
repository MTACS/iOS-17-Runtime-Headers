
@protocol MNTimeAndDistanceUpdaterDelegate <NSObject>

@required

- (void)timeAndDistanceUpdater:(MNTimeAndDistanceUpdater *)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)timeAndDistanceUpdater:(MNTimeAndDistanceUpdater *)arg1 didUpdateDisplayETA:(MNDisplayETAInfo *)arg2 remainingDistance:(MNRouteDistanceInfo *)arg3 batteryChargeInfo:(MNBatteryChargeInfo *)arg4;

@end
