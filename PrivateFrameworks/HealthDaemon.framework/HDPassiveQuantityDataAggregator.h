
@interface HDPassiveQuantityDataAggregator : HDPassiveDataAggregator {
    HKQuantityType * _quantityType;
}

@property (nonatomic, readonly, copy) HKQuantityType *quantityType;

- (void).cxx_destruct;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id*)arg2;
- (id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2;
- (id)objectType;
- (id)quantityType;
- (Class)sensorDatumClass;

@end
