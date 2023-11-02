
@interface REHistogram : NSObject <NSCopying> {
    REFeature * _feature;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) unsigned long long mean;
@property (nonatomic, readonly) unsigned long long standardDeviation;

- (void).cxx_destruct;
- (void)addValue:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countForValue:(unsigned long long)arg1;
- (unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2;
- (void)enumerateValuesUsingBlock:(id /* block */)arg1;
- (id)feature;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1;
- (id)initWithFeature:(id)arg1 binningSize:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mean;
- (void)removeValue:(unsigned long long)arg1;
- (unsigned long long)standardDeviation;

@end
