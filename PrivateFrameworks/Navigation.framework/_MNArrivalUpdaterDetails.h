
@interface _MNArrivalUpdaterDetails : NSObject {
    MNEVChargingStateMonitor * _evChargingStateMonitor;
    bool  _isEVCharging;
    bool  _isInParkingDetectionRegion;
    MNNavigationSessionState * _navigationSessionState;
}

@property (nonatomic, retain) MNEVChargingStateMonitor *evChargingStateMonitor;
@property (nonatomic) bool isEVCharging;
@property (nonatomic) bool isInParkingDetectionRegion;
@property (nonatomic, retain) MNNavigationSessionState *navigationSessionState;

- (void).cxx_destruct;
- (id)evChargingStateMonitor;
- (bool)isEVCharging;
- (bool)isInParkingDetectionRegion;
- (id)navigationSessionState;
- (void)setEvChargingStateMonitor:(id)arg1;
- (void)setIsEVCharging:(bool)arg1;
- (void)setIsInParkingDetectionRegion:(bool)arg1;
- (void)setNavigationSessionState:(id)arg1;

@end
