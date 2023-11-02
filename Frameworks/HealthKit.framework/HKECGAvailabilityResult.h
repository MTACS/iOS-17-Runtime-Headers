
@interface HKECGAvailabilityResult : NSObject {
    bool  _advertiseDirectOnboarding;
    bool  _advertiseDirectOnboardingEscapeHatch;
    bool  _advertiseUpgrade;
    bool  _advertiseUpgradeBackgroundDelivered;
    bool  _advertiseUpgradeEscapeHatch;
}

@property (nonatomic, readonly) bool advertiseDirectOnboarding;
@property (nonatomic, readonly) bool advertiseDirectOnboardingEscapeHatch;
@property (nonatomic, readonly) bool advertiseUpgrade;
@property (nonatomic, readonly) bool advertiseUpgradeBackgroundDelivered;
@property (nonatomic, readonly) bool advertiseUpgradeEscapeHatch;

+ (id)resultWithAdvertiseDirectOnboarding:(bool)arg1 advertiseDirectOnboardingSecondary:(bool)arg2 advertiseUpgrade:(bool)arg3 advertiseUpgradeSecondary:(bool)arg4 advertiseUpgradeBackgroundDelivered:(bool)arg5;
+ (id)resultWithNoAdvertisements;

- (bool)advertiseDirectOnboarding;
- (bool)advertiseDirectOnboardingEscapeHatch;
- (bool)advertiseUpgrade;
- (bool)advertiseUpgradeBackgroundDelivered;
- (bool)advertiseUpgradeEscapeHatch;
- (id)initWithAdvertiseDirectOnboarding:(bool)arg1 advertiseDirectOnboardingSecondary:(bool)arg2 advertiseUpgrade:(bool)arg3 advertiseUpgradeSecondary:(bool)arg4 advertiseUpgradeBackgroundDelivered:(bool)arg5;

@end
