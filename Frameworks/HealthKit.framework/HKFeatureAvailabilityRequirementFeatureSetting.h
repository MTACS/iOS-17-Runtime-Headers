
@interface HKFeatureAvailabilityRequirementFeatureSetting : NSObject <NSCopying, NSSecureCoding> {
    NSString * _featureIdentifier;
    bool  _isOnWhenSettingIsAbsent;
    NSString * _settingsOnKey;
}

@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (nonatomic, readonly) bool isOnWhenSettingIsAbsent;
@property (nonatomic, readonly, copy) NSString *settingsOnKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)featureIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureIdentifier:(id)arg1 isOnWhenSettingIsAbsent:(bool)arg2;
- (id)initWithFeatureIdentifier:(id)arg1 settingsOnKey:(id)arg2 isOnWhenSettingIsAbsent:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isOnWhenSettingIsAbsent;
- (id)settingsOnKey;

@end
