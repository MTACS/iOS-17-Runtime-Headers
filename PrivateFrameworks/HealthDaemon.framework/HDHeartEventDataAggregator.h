
@interface HDHeartEventDataAggregator : HDPassiveDataAggregator

- (id)_categoryType;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id*)arg2;
- (bool)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id*)arg4;
- (id)objectType;
- (Class)sensorDatumClass;

@end
