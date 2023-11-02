
@interface HDSeriesQuantityDataAggregator : HDActiveQuantityDataAggregator {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _lock_failedSeriesUUIDs;
}

- (void).cxx_destruct;
- (void)addDatum:(id)arg1 toAccumulatedData:(id)arg2;
- (id)aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 options:(unsigned long long)arg6 error:(id*)arg7;
- (id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2;
- (id)initialAggregationState;
- (bool)requiresNewSeriesForDatum:(id)arg1 lastDatum:(id)arg2 seriesLength:(long long)arg3 currentSeries:(id)arg4 configuration:(id)arg5 aggregationInterval:(double)arg6;
- (bool)shouldAggregateToSeriesForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 options:(unsigned long long)arg6;
- (bool)shouldFreezeCurrentSeries:(id)arg1 lastDatum:(id)arg2 seriesLength:(long long)arg3 configuration:(id)arg4 aggregationInterval:(double)arg5;

@end
