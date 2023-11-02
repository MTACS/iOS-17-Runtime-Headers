
@interface _REChangeFeatureTransformer : REFeatureTransformer {
    double  _interval;
    NSDate * _lastChangeDate;
    unsigned long long  _value;
}

@property (nonatomic) unsigned long long value;

+ (id)functionName;
+ (bool)supportsInvalidation;

- (void).cxx_destruct;
- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)_featureCount;
- (unsigned long long)_outputType;
- (void)_updateConfigurationForInterval:(double)arg1;
- (bool)_validateWithFeatures:(id)arg1;
- (void)configureWithInvocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setValue:(unsigned long long)arg1;
- (unsigned long long)value;

@end
