
@interface MIOMutableModelDescription : MIOModelDescription

@property (nonatomic, copy) NSDictionary *metadata;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setShortDescription:(id)arg1 forInputFeatureWithName:(id)arg2;
- (void)setShortDescription:(id)arg1 forOutputFeatureWithName:(id)arg2;
- (void)setShortDescription:(id)arg1 forTrainingInputFeatureWithName:(id)arg2;

@end
