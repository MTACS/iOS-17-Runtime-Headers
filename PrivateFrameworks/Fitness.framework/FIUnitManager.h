
@interface FIUnitManager : NSObject {
    HKHealthStore * _healthStore;
    NSMutableDictionary * _preferredUnits;
}

- (void).cxx_destruct;
- (id)_loadPreferredUnitsFromDefaults;
- (void)_localeDidChange:(id)arg1;
- (void)_notifyUnitPreferencesChanged;
- (id)_preferredHKUnitForQuantityType:(id)arg1;
- (void)_setPreferredHKUnit:(id)arg1 forQuantityType:(id)arg2;
- (void)_storePreferredUnitsInDefaults:(id)arg1;
- (void)_updatePreferredUnits;
- (void)_userPreferencesDidChange:(id)arg1;
- (double)distanceInDistanceUnit:(unsigned long long)arg1 forDistanceInMeters:(double)arg2;
- (double)distanceInMetersForDistanceInUserUnit:(double)arg1 distanceType:(unsigned long long)arg2;
- (double)distanceInUserDistanceUnitForDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2;
- (id)initWithHealthStore:(id)arg1;
- (double)paceWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3;
- (void)setPreferredUnitsForTesting:(id)arg1;
- (void)setUserActiveEnergyBurnedUnit:(id)arg1;
- (void)setUserBasalEnergyBurnedUnit:(id)arg1;
- (void)setUserDistanceCyclingUnit:(unsigned long long)arg1;
- (void)setUserDistanceUnit:(unsigned long long)arg1 forDistanceType:(unsigned long long)arg2;
- (void)setUserDistanceWalkingRunningUnit:(unsigned long long)arg1;
- (id)userActiveEnergyBurnedUnit;
- (id)userBasalEnergyBurnedUnit;
- (id)userDistanceCyclingHKUnit;
- (unsigned long long)userDistanceCyclingUnit;
- (id)userDistanceElevationHKUnit;
- (unsigned long long)userDistanceElevationUnit;
- (id)userDistanceHKUnitForActivityType:(id)arg1;
- (id)userDistanceHKUnitForDistanceType:(unsigned long long)arg1;
- (unsigned long long)userDistanceUnitForDistanceType:(unsigned long long)arg1;
- (id)userDistanceWalkingRunningHKUnit;
- (unsigned long long)userDistanceWalkingRunningUnit;
- (id)userLapLengthHKUnit;

@end
