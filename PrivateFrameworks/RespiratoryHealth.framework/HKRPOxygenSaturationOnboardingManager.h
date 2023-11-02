
@interface HKRPOxygenSaturationOnboardingManager : NSObject {
    <HKRPOxygenSaturationOnboardingManagerDataSource> * _dataSource;
}

@property (nonatomic, readonly) bool ageIsAppropriate;
@property (nonatomic, readonly) bool bloodOxygenFeatureEnabled;
@property (nonatomic, readonly) bool bloodOxygenRemoteDisabled;
@property (nonatomic, readonly) <HKRPOxygenSaturationOnboardingManagerDataSource> *dataSource;
@property (nonatomic, readonly) bool onboardingComplete;
@property (nonatomic, readonly) bool onboardingDuringPairingShouldAppear;
@property (nonatomic, readonly) bool onboardingShouldAppear;
@property (nonatomic, readonly) bool pairedDeviceIsAppropriate;
@property (nonatomic, readonly) bool settingsShouldAppear;
@property (nonatomic, readonly) bool shouldAdvertise;

- (void).cxx_destruct;
- (bool)_currentDeviceHasCapability;
- (bool)_isAlternateDevice;
- (bool)ageIsAppropriate;
- (bool)bloodOxygenFeatureEnabled;
- (bool)bloodOxygenRemoteDisabled;
- (void)cacheCompletedOnboardingStateIfNeeded;
- (id)dataSource;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (void)onboardWithCompletion:(id /* block */)arg1;
- (bool)onboardingComplete;
- (bool)onboardingDuringPairingShouldAppear;
- (bool)onboardingShouldAppear;
- (bool)pairedDeviceIsAppropriate;
- (bool)settingsShouldAppear;
- (bool)shouldAdvertise;

@end
