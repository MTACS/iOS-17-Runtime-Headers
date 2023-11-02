
@interface HDHeartRateDataAggregator : HDDataAggregator

- (id)configurationForCollector:(id)arg1;
- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (void)dealloc;
- (id)initWithDataCollectionManager:(id)arg1;
- (id)objectType;
- (void)setConfiguration:(id)arg1;
- (void)workoutManagerStateChanged:(id)arg1;

@end
