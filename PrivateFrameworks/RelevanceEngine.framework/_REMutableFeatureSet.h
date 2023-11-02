
@interface _REMutableFeatureSet : REMutableFeatureSet {
    NSMutableSet * _features;
    NSMutableSet * _names;
}

- (void).cxx_destruct;
- (void)addFeature:(id)arg1;
- (bool)containsFeature:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)featureWithName:(id)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithFeature:(id)arg1;
- (id)initWithFeatures:(id)arg1;
- (void)removeAllFeatures;
- (void)removeFeature:(id)arg1;

@end
