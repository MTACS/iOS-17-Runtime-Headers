
@interface _REWidthFeatureTransformer : REFeatureTransformer {
    unsigned long long  _mask;
    unsigned long long  _shift;
    unsigned long long  _width;
}

- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)_featureCount;
- (unsigned long long)_outputType;
- (bool)_validateWithFeatures:(id)arg1;
- (unsigned long long)hash;
- (id)initWithWidth:(unsigned long long)arg1 shift:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;

@end
