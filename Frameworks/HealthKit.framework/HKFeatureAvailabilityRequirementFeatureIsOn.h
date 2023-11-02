
@interface HKFeatureAvailabilityRequirementFeatureIsOn : HKFeatureAvailabilityOnboardingRecordRequirement <HKFeatureAvailabilityRequirement> {
    bool  _isOnWhenSettingIsAbsent;
    NSString * _settingsOnKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOnWhenSettingIsAbsent;
@property (nonatomic, readonly) NSString *requirementDescription;
@property (nonatomic, readonly, copy) NSString *settingsOnKey;
@property (readonly) Class superclass;

+ (id)requirementIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureIdentifier:(id)arg1 isOnWhenSettingIsAbsent:(bool)arg2;
- (id)initWithFeatureIdentifier:(id)arg1 settingsOnKey:(id)arg2 isOnWhenSettingIsAbsent:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isOnWhenSettingIsAbsent;
- (id)isSatisfiedWithOnboardingRecord:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
- (id)requirementDescription;
- (id)settingsOnKey;

@end
