
@protocol MNArrivalUpdaterDelegate <NSObject>

@required

- (void)arrivalUpdater:(MNArrivalUpdater *)arg1 didUpdateArrivalInfo:(MNArrivalInfo *)arg2;

@optional

- (void)arrivalUpdater:(MNArrivalUpdater *)arg1 didArriveAtEndOfLegIndex:(unsigned long long)arg2;
- (void)arrivalUpdater:(MNArrivalUpdater *)arg1 didDepartFromLegIndex:(unsigned long long)arg2 withReason:(unsigned long long)arg3;
- (void)arrivalUpdater:(MNArrivalUpdater *)arg1 didEnterPreArrivalStateForLegIndex:(unsigned long long)arg2;
- (void)arrivalUpdater:(MNArrivalUpdater *)arg1 didTimeoutAtLegIndex:(unsigned long long)arg2 withReason:(unsigned long long)arg3;
- (void)arrivalUpdater:(MNArrivalUpdater *)arg1 didUpdateVehicleParkingType:(long long)arg2;
- (void)arrivalUpdater:(MNArrivalUpdater *)arg1 isApproachingEndOfLeg:(unsigned long long)arg2;
- (void)arrivalUpdater:(MNArrivalUpdater *)arg1 shouldShowChargingInfoForWaypoint:(GEOComposedWaypoint *)arg2;
- (void)arrivalUpdaterDidDetectParkedVehicle:(MNArrivalUpdater *)arg1;
- (void)arrivalUpdaterDidEnterParkingDetectionRegion:(MNArrivalUpdater *)arg1;
- (void)arrivalUpdaterDidLeaveParkingDetectionRegion:(MNArrivalUpdater *)arg1;
- (void)arrivalUpdaterDidTimeoutInArrivalRegion:(MNArrivalUpdater *)arg1;

@end
