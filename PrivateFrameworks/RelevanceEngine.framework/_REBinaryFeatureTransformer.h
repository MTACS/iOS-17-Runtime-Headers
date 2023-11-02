
@interface _REBinaryFeatureTransformer : REFeatureTransformer {
    unsigned long long  _threshold;
}

@property (nonatomic) unsigned long long threshold;

+ (id)functionName;

- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)_featureCount;
- (unsigned long long)_outputType;
- (bool)_validateWithFeatures:(id)arg1;
- (void)configureWithInvocation:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setThreshold:(unsigned long long)arg1;
- (unsigned long long)threshold;

@end
