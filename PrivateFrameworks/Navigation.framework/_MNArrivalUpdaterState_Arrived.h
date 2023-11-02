
@interface _MNArrivalUpdaterState_Arrived : _MNArrivalUpdaterState {
    NSTimer * _departureTimer;
    MNDepartureUpdater * _departureUpdater;
}

- (void).cxx_destruct;
- (bool)_checkForDeparture;
- (bool)_updateForDeparture;
- (void)dealloc;
- (void)onEnterState:(id)arg1;
- (double)parkingDetectionExcludeRadius;
- (long long)state;
- (void)updateForEVChargingState:(bool)arg1;
- (void)updateForEVReachedTargetBatteryCharge;
- (void)updateForLocation;

@end
