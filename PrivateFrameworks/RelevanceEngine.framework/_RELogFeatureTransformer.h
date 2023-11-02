
@interface _RELogFeatureTransformer : REFeatureTransformer {
    double  _base;
    unsigned long long  _type;
}

- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)_featureCount;
- (unsigned long long)_outputType;
- (bool)_validateWithFeatures:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBase:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
