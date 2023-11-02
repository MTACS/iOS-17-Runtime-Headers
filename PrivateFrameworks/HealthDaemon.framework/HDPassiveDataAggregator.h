
@interface HDPassiveDataAggregator : HDDataAggregator

- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id*)arg2;
- (Class)sensorDatumClass;

@end
