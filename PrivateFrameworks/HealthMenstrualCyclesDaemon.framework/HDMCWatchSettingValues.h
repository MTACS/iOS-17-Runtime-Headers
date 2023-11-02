
@interface HDMCWatchSettingValues : NSObject {
    NSNumber * _defaultsEnabledValue;
    NSNumber * _featureSettingEnabledValue;
    NSNumber * _lastReconciledEnabledValue;
}

@property (nonatomic, readonly, copy) NSNumber *defaultsEnabledValue;
@property (nonatomic, readonly, copy) NSNumber *featureSettingEnabledValue;
@property (nonatomic, readonly, copy) NSNumber *lastReconciledEnabledValue;

- (void).cxx_destruct;
- (id)defaultsEnabledValue;
- (id)description;
- (id)featureSettingEnabledValue;
- (unsigned long long)hash;
- (id)initWithFeatureSettingEnabledValue:(id)arg1 defaultsEnabledValue:(id)arg2 lastReconciledEnabledValue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)lastReconciledEnabledValue;
- (id)reconciledEnabledValue;

@end
