
@interface MLFeatureFlags : NSObject {
    NSMutableDictionary * _flags;
    NSMutableDictionary * _overrideOriginalValues;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) NSMutableDictionary *flags;
@property (nonatomic, readonly) NSMutableDictionary *overrideOriginalValues;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

+ (id)sharedFeatureFlags;

- (void).cxx_destruct;
- (void)addFeature:(id)arg1 withControlName:(id)arg2 defaultValue:(bool)arg3;
- (id)controlKeyForFeature:(id)arg1;
- (void)defineFeatures;
- (id)flags;
- (id)init;
- (bool)isFeatureEnabled:(id)arg1;
- (bool)isMPSGraphEnabled;
- (bool)isMPSGraphFP16Enabled;
- (id)overrideOriginalValues;
- (bool)removeOverrideForFeature:(id)arg1;
- (bool)setOverride:(bool)arg1 forFeature:(id)arg2;
- (id)userDefaults;

@end
