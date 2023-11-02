
@interface DESDediscoUploader : NSObject {
    DESDediscoKey * _key;
    DESRecipe * _recipe;
}

@property (nonatomic, readonly) DESDediscoKey *key;

+ (bool)hasAllZeroData:(id)arg1;
+ (bool)uploadViaDedisco:(id)arg1 jsonResult:(id)arg2 recipe:(id)arg3 bundleIdentifier:(id)arg4 submissionCount:(unsigned int*)arg5 error:(id*)arg6;

- (void).cxx_destruct;
- (bool)donateCategoricalMetadata:(id)arg1 dediscoMetadata:(id)arg2 recorder:(id)arg3;
- (bool)donateFedStatsMetrics:(id)arg1 dataKey:(id)arg2 dataTypeContent:(id)arg3 dediscoMetadata:(id)arg4 error:(id*)arg5 recorder:(id)arg6;
- (bool)donateMetrics:(id)arg1 dediscoMetadata:(id)arg2 recorder:(id)arg3;
- (unsigned int)donateResult:(id)arg1 dediscoMetadata:(id)arg2 recorder:(id)arg3;
- (id)initWithBundleIdentifier:(id)arg1 recipe:(id)arg2;
- (id)key;
- (bool)scaleData:(id)arg1 withScalingFactor:(double)arg2;

@end
