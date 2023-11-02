
@interface HDActiveQuantityDataAggregator : HDActiveDataAggregator {
    <HDDataCollectionForwarder> * _dataForwarder;
    HKQuantityType * _quantityType;
}

@property (nonatomic, readonly, copy) HKQuantityType *quantityType;

- (void).cxx_destruct;
- (id)additionalMetadataForCollector:(id)arg1;
- (id)aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 options:(unsigned long long)arg6 error:(id*)arg7;
- (id)description;
- (id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2;
- (id)objectType;
- (id)quantityType;
- (Class)sensorDatumClass;

@end
