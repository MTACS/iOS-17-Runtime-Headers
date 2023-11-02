
@interface FTMutableTTSRequestFeatureFlags : FTTTSRequestFeatureFlags

@property (nonatomic) bool cache_only;
@property (nonatomic) bool disable_prompts;
@property (nonatomic) bool fe_feature;
@property (nonatomic) bool fe_feature_only;
@property (nonatomic) long long phoneset_type;

- (bool)cache_only;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disable_prompts;
- (bool)fe_feature;
- (bool)fe_feature_only;
- (id)init;
- (long long)phoneset_type;
- (void)setCache_only:(bool)arg1;
- (void)setDisable_prompts:(bool)arg1;
- (void)setFe_feature:(bool)arg1;
- (void)setFe_feature_only:(bool)arg1;
- (void)setPhoneset_type:(long long)arg1;

@end
