
@interface HKFeatureAvailabilityInternalSettingsConfiguration : NSObject {
    NSString * _featureIdentifier;
    unsigned long long  _options;
    NSArray * _samplesTypesToDelete;
    NSString * _userDefaultsDisabledOverrideKey;
    NSString * _userDefaultsDomain;
    NSString * _userDefaultsFeatureEnabledKey;
}

@property (nonatomic, copy) NSString *featureIdentifier;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) NSArray *samplesTypesToDelete;
@property (nonatomic, copy) NSString *userDefaultsDisabledOverrideKey;
@property (nonatomic, copy) NSString *userDefaultsDomain;
@property (nonatomic, copy) NSString *userDefaultsFeatureEnabledKey;

- (void).cxx_destruct;
- (id)featureIdentifier;
- (id)initWithFeatureIdentifier:(id)arg1 userDefaultsDomain:(id)arg2 userDefaultsFeatureEnabledKey:(id)arg3 userDefaultsDisabledOverrideKey:(id)arg4 options:(unsigned long long)arg5 samplesTypesToDelete:(id)arg6;
- (unsigned long long)options;
- (bool)requireReboot;
- (id)samplesTypesToDelete;
- (void)setFeatureIdentifier:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setSamplesTypesToDelete:(id)arg1;
- (void)setUserDefaultsDisabledOverrideKey:(id)arg1;
- (void)setUserDefaultsDomain:(id)arg1;
- (void)setUserDefaultsFeatureEnabledKey:(id)arg1;
- (bool)showDisabledOverride;
- (bool)showFeatureEnable;
- (bool)syncToWatch;
- (id)userDefaultsDisabledOverrideKey;
- (id)userDefaultsDomain;
- (id)userDefaultsFeatureEnabledKey;

@end
