
@interface _REBucketFeatureTransformer : REFeatureTransformer {
    long long  _bitCount;
    unsigned long long  _count;
    unsigned long long  _max;
    unsigned long long  _min;
}

@property (nonatomic) unsigned long long max;
@property (nonatomic) unsigned long long min;

+ (id)functionName;

- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)_featureCount;
- (unsigned long long)_outputType;
- (void)_updateConfigurationForCount:(unsigned long long)arg1;
- (bool)_validateWithFeatures:(id)arg1;
- (void)configureWithInvocation:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)max;
- (unsigned long long)min;
- (void)setMax:(unsigned long long)arg1;
- (void)setMin:(unsigned long long)arg1;

@end
