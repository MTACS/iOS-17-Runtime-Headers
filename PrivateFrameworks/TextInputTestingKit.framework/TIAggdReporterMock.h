
@interface TIAggdReporterMock : NSObject <TIAggdReporting> {
    NSMutableDictionary * _distributions;
    NSMutableDictionary * _scalars;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *distributions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *scalars;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_getScalar:(id)arg1;
- (void)_setScalar:(id)arg1 withValue:(long long)arg2;
- (void)addValue:(long long)arg1 forKey:(id)arg2;
- (void)clear;
- (void)clearDistributionKey:(id)arg1;
- (void)clearScalarKey:(id)arg1;
- (int)commit;
- (void)decrementKey:(id)arg1;
- (id)distributions;
- (id)getDistributionObject:(id)arg1;
- (long long)getScalar:(id)arg1;
- (void)incrementKey:(id)arg1;
- (id)init;
- (void)pushValue:(double)arg1 forKey:(id)arg2;
- (id)scalars;
- (void)setScalar:(id)arg1 withValue:(long long)arg2;
- (void)setValue:(double)arg1 forDistributionKey:(id)arg2;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)significantTimeChanged;
- (void)subtractValue:(long long)arg1 forKey:(id)arg2;
- (id)toDictionary;
- (id)toJsonString;

@end
