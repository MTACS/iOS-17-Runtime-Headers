
@interface OPTTSMutableTTSRequestFeatureFlags : OPTTSTTSRequestFeatureFlags

@property (nonatomic) bool fe_feature;
@property (nonatomic) bool fe_feature_only;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)fe_feature;
- (bool)fe_feature_only;
- (id)init;
- (void)setFe_feature:(bool)arg1;
- (void)setFe_feature_only:(bool)arg1;

@end
