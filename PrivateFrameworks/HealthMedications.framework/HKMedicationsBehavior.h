
@interface HKMedicationsBehavior : NSObject {
    bool  _asyncMedicationReschedulesEnabled;
    bool  _medicationsFutureMigrationsEnabled;
    <HKMedicationsCapabilityProviding> * _mockPairedDevice;
}

@property (nonatomic) bool asyncMedicationReschedulesEnabled;
@property (nonatomic) bool medicationsFutureMigrationsEnabled;
@property (nonatomic, readonly, copy) <HKMedicationsCapabilityProviding> *mockPairedDevice;

+ (id)_getActivePairedDevice;
+ (bool)_medicationFutureMigrationsEnabled;
+ (id)_unitTesting_behaviorWithMockPairedDevice:(id)arg1;
+ (bool)hasSupportedAppleWatchPaired;
+ (void)resetSharedBehavior;
+ (void)setSharedBehavior:(id)arg1;
+ (id)sharedBehavior;

- (void).cxx_destruct;
- (id)_initWithFutureMigrationsEnabled:(bool)arg1 asyncMedicationReschedulesEnabled:(bool)arg2 mockPairedDevice:(id)arg3;
- (bool)asyncMedicationReschedulesEnabled;
- (id)init;
- (bool)medicationsFutureMigrationsEnabled;
- (id)mockPairedDevice;
- (void)setAsyncMedicationReschedulesEnabled:(bool)arg1;
- (void)setMedicationsFutureMigrationsEnabled:(bool)arg1;

@end
