
@interface HKQuerySampleListDataFetcher : NSObject <HKSampleListDataFetcher> {
    HKHealthStore * _healthStore;
    HKQuery * _query;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithHealthStore:(id)arg1 query:(id)arg2;
- (void)start;
- (void)stop;

@end
