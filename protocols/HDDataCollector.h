
@protocol HDDataCollector <NSObject>

@required

- (void)beginCollectionForDataAggregator:(HDDataAggregator *)arg1 lastPersistedSensorDatum:(id <HDCollectedSensorDatum>)arg2;
- (void)dataAggregator:(HDDataAggregator *)arg1 wantsCollectionWithConfiguration:(HDDataCollectorConfiguration *)arg2;
- (NSString *)identifierForDataAggregator:(HDDataAggregator *)arg1;
- (HKSource *)sourceForDataAggregator:(HDDataAggregator *)arg1;

@optional

- (bool)canResumeCollectionFromLastSensorDatum;
- (void)dataAggregator:(HDDataAggregator *)arg1 didPersistDatums:(NSArray *)arg2 success:(bool)arg3 error:(NSError *)arg4;
- (void)dataAggregator:(void *)arg1 requestsCollectionThroughDate:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HDDataAggregator *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (double)preferredAggregationIntervalForAggregator:(HDDataAggregator *)arg1;
- (void)registerWithAggregators;
- (Class)sensorDatumClassForAggregator:(HDDataAggregator *)arg1;

@end
