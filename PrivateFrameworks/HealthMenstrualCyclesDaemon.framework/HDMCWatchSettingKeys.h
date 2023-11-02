
@interface HDMCWatchSettingKeys : NSObject {
    NSString * _defaultsEnabledKey;
    NSString * _featureIdentifier;
    NSString * _featureSettingEnabledKey;
    NSString * _lastReconciledEnabledKey;
}

@property (nonatomic, readonly, copy) NSString *defaultsEnabledKey;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (nonatomic, readonly, copy) NSString *featureSettingEnabledKey;
@property (nonatomic, readonly, copy) NSString *lastReconciledEnabledKey;

- (void).cxx_destruct;
- (id)defaultsEnabledKey;
- (id)description;
- (id)featureIdentifier;
- (id)featureSettingEnabledKey;
- (unsigned long long)hash;
- (id)initWithFeatureIdentifier:(id)arg1 defaultsEnabledKey:(id)arg2;
- (id)initWithFeatureIdentifier:(id)arg1 featureSettingEnabledKey:(id)arg2 defaultsEnabledKey:(id)arg3 lastReconciledEnabledKey:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)lastReconciledEnabledKey;

@end
