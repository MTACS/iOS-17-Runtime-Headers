
@interface _RECategoricalHistogram : REHistogram {
    RETaggedFeatureValueCountedSet * _values;
}

- (void).cxx_destruct;
- (void)addValue:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countForValue:(unsigned long long)arg1;
- (unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2;
- (void)enumerateValuesUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 binningSize:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mean;
- (void)removeValue:(unsigned long long)arg1;
- (unsigned long long)standardDeviation;

@end
