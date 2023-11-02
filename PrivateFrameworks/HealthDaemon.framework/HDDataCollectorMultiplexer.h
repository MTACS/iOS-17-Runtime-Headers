
@interface HDDataCollectorMultiplexer : NSObject {
    NSDictionary * _aggregatorsByType;
    <HDDataCollector> * _collector;
    HDProfile * _profile;
    NSMapTable * _recordsByAggregator;
}

- (void).cxx_destruct;
- (id)aggregatorForType:(id)arg1;
- (id)diagnosticDescription;
- (id)identifierForAggregator:(id)arg1;
- (id)initForCollector:(id)arg1 identifier:(id)arg2 profile:(id)arg3 types:(id)arg4;
- (id)lastDatumForType:(id)arg1;
- (id)mergedConfiguration;
- (void)registerForCollectionWithState:(id)arg1;
- (void)setConfiguration:(id)arg1 forAggregator:(id)arg2;
- (void)setLastSensorDatum:(id)arg1 forAggregator:(id)arg2;
- (void)unregisterForCollection;

@end
