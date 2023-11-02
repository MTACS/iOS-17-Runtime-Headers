
@interface ACHMindfulSessionIterator : NSObject {
    unsigned long long  _batchSize;
    HKHealthStore * _healthStore;
    HKSampleIteratorQuery * _query;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKSampleIteratorQuery *query;

- (void).cxx_destruct;
- (void)_runQueryForDateInterval:(id)arg1 lastCursor:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)batchSize;
- (void)enumerateMindfulSessionsForDateInterval:(id)arg1 handler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithHealthStore:(id)arg1 batchSize:(unsigned long long)arg2;
- (id)query;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setQuery:(id)arg1;

@end
