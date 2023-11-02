
@interface AMDFeatureProvider : NSObject

+ (id)getProviderForSource:(id)arg1 WithDomain:(id)arg2;

- (id)getFeatureWithName:(id)arg1 withColumn:(id)arg2 error:(id*)arg3;
- (void)storeFeatureData:(id)arg1 error:(id*)arg2;

@end
