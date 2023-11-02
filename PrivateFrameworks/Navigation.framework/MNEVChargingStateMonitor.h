
@interface MNEVChargingStateMonitor : NSObject <MNVirtualGarageManagerObserver> {
    NSDate * _arrivalDate;
    <MNEVChargingStateMonitorDelegate> * _delegate;
    bool  _isCharging;
    bool  _shouldShowChargingInfo;
    NSMeasurement * _targetBatteryCharge;
    NSTimer * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNEVChargingStateMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMeasurement *targetBatteryCharge;

- (void).cxx_destruct;
- (void)_notifyShouldShowChargingInfo;
- (void)_startTimer;
- (void)_updateForVehicle:(id)arg1 forceDelegateCallback:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithTargetBatteryCharge:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)targetBatteryCharge;
- (void)updateForArrival;
- (void)updateForLocation:(id)arg1;
- (void)virtualGarageManager:(id)arg1 didUpdateSelectedVehicle:(id)arg2;

@end
