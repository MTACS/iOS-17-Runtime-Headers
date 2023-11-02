
@interface _REContinuousHistogram : REHistogram {
    unsigned long long  _binningValue;
    RESortedDictionary * _values;
}

- (void).cxx_destruct;
- (void)_enumerateValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2 block:(id /* block */)arg3;
- (void)addValue:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countForValue:(unsigned long long)arg1;
- (unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2;
- (void)dealloc;
- (void)enumerateValuesUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 binningSize:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mean;
- (void)removeValue:(unsigned long long)arg1;
- (unsigned long long)standardDeviation;

@end
