
@interface _RERecentFeatureTransformer : REFeatureTransformer {
    unsigned long long  _bitCount;
    REFeatureValueCounter * _counter;
}

+ (id)functionName;
+ (bool)supportsInvalidation;
+ (bool)supportsPersistence;

- (void).cxx_destruct;
- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)_featureCount;
- (unsigned long long)_outputType;
- (void)_updateConfigurationForCount:(unsigned long long)arg1;
- (bool)_validateWithFeatures:(id)arg1;
- (void)configureWithInvocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)readFromURL:(id)arg1 error:(id*)arg2;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
