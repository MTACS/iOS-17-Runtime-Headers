
@interface HDActiveDataAggregator : HDDataAggregator {
    NSLock * _aggregationLock;
    NSMutableDictionary * _currentAggregationStates;
    _HKDelayedOperation * _delayedAggregationOperation;
}

- (void).cxx_destruct;
- (id)aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 options:(unsigned long long)arg6 error:(id*)arg7;
- (double)aggregationInterval;
- (double)aggregationIntervalForCollector:(id)arg1;
- (id)configurationForCollector:(id)arg1;
- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (bool)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id*)arg4;
- (id)initWithDataCollectionManager:(id)arg1;
- (id)initialAggregationState;
- (void)recomputeCollectorConfiguration;
- (void)registerDataCollector:(id)arg1 state:(id)arg2;
- (void)requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (Class)sensorDatumClass;
- (void)unregisterDataCollector:(id)arg1;

@end
