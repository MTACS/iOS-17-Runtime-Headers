
@interface AMAmbientPresentationTriggerManager : NSObject {
    AMAmbientDefaults * _ambientDefaults;
    NSDate * _batteryStateChangeTimestamp;
    CMMagicMountState * _cachedMagicMountState;
    NSDate * _magicMountEventTimestamp;
    CMMagicMountManager * _magicMountManager;
    NSHashTable * _observers;
    NSNumber * _overriddenBatteryChargingState;
    CMMagicMountManager * _overridenMagicMountManager;
    bool  _presentationDetectionEnabled;
}

@property (nonatomic) AMAmbientDefaults *ambientDefaults;
@property (nonatomic, retain) CMMagicMountState *cachedMagicMountState;
@property (nonatomic, retain) CMMagicMountManager *magicMountManager;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) NSNumber *overriddenBatteryChargingState;
@property (nonatomic, retain) CMMagicMountManager *overridenMagicMountManager;
@property (getter=isPresentationDetectionEnabled, nonatomic) bool presentationDetectionEnabled;
@property (nonatomic, readonly) long long presentationState;

- (void).cxx_destruct;
- (bool)_analogousTriggerEvents;
- (long long)_currentPresentationState;
- (void)_deviceBatteryStateChanged;
- (void)_disableMagicMountDetection;
- (bool)_ignoreBatteryChargingForPresentation;
- (bool)_isDeviceBatteryCharging;
- (void)_notifyObserversUpdatedAmbientPresentationState:(long long)arg1;
- (void)_setDeviceBatteryMonitoringEnabled:(bool)arg1;
- (void)_setupMagicMountDetectionIfNecessary;
- (void)_updateAmbientPresentationState;
- (void)addObserver:(id)arg1;
- (id)ambientDefaults;
- (id)cachedMagicMountState;
- (id)initWithMagicMountManager:(id)arg1;
- (bool)isPresentationDetectionEnabled;
- (id)magicMountManager;
- (id)observers;
- (id)overriddenBatteryChargingState;
- (id)overridenMagicMountManager;
- (long long)presentationState;
- (void)removeObserver:(id)arg1;
- (void)setAmbientDefaults:(id)arg1;
- (void)setCachedMagicMountState:(id)arg1;
- (void)setMagicMountManager:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOverriddenBatteryChargingState:(id)arg1;
- (void)setOverridenMagicMountManager:(id)arg1;
- (void)setPresentationDetectionEnabled:(bool)arg1;
- (void)testSetOverrideBatteryCharging:(bool)arg1;

@end
