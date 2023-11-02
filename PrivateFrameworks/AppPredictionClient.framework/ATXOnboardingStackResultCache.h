
@interface ATXOnboardingStackResultCache : NSObject <NSCopying, NSSecureCoding> {
    ATXOnboardingStackResult * _heavyBatteryDrainResult;
    ATXOnboardingStackResult * _lightBatteryDrainResult;
    ATXOnboardingStackResult * _mediumBatteryDrainResult;
    ATXOnboardingStackResult * _unknownBatteryDrainResult;
}

@property (nonatomic, copy) ATXOnboardingStackResult *heavyBatteryDrainResult;
@property (nonatomic, copy) ATXOnboardingStackResult *lightBatteryDrainResult;
@property (nonatomic, copy) ATXOnboardingStackResult *mediumBatteryDrainResult;
@property (nonatomic, copy) ATXOnboardingStackResult *unknownBatteryDrainResult;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)heavyBatteryDrainResult;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnknownBatteryDrainResult:(id)arg1 lightBatteryDrainResult:(id)arg2 mediumBatteryDrainResult:(id)arg3 heavyBatteryDrainResult:(id)arg4;
- (id)lightBatteryDrainResult;
- (id)mediumBatteryDrainResult;
- (id)resultForClassification:(unsigned long long)arg1;
- (void)setHeavyBatteryDrainResult:(id)arg1;
- (void)setLightBatteryDrainResult:(id)arg1;
- (void)setMediumBatteryDrainResult:(id)arg1;
- (void)setUnknownBatteryDrainResult:(id)arg1;
- (id)unknownBatteryDrainResult;

@end
