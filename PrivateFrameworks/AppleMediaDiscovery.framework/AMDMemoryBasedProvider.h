
@interface AMDMemoryBasedProvider : AMDFeatureProvider {
    NSMutableDictionary * _featureStore;
}

@property (nonatomic, retain) NSMutableDictionary *featureStore;

+ (bool)isValidFeatureObject:(id)arg1;
+ (bool)isValidMultiArray:(id)arg1;
+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)featureStore;
- (id)getFeatureWithName:(id)arg1 withColumn:(id)arg2 error:(id*)arg3;
- (void)setFeatureStore:(id)arg1;
- (void)storeFeatureData:(id)arg1 error:(id*)arg2;

@end
