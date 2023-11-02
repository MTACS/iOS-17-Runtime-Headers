
@interface REMutableFeatureSet : REFeatureSet

- (void)addFeature:(id)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithFeature:(id)arg1;
- (id)initWithFeatures:(id)arg1;
- (void)intersetFeatureSet:(id)arg1;
- (void)minusFeatureSet:(id)arg1;
- (void)removeAllFeatures;
- (void)removeFeature:(id)arg1;
- (void)unionFeatureSet:(id)arg1;

@end
