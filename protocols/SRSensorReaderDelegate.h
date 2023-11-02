
@protocol SRSensorReaderDelegate <NSObject>

@optional

- (void)sensorReader:(SRSensorReader *)arg1 didChangeAuthorizationStatus:(long long)arg2;
- (void)sensorReader:(SRSensorReader *)arg1 didCompleteFetch:(SRFetchRequest *)arg2;
- (void)sensorReader:(SRSensorReader *)arg1 didFetchDevices:(NSArray *)arg2;
- (void)sensorReader:(SRSensorReader *)arg1 fetchDevicesDidFailWithError:(NSError *)arg2;
- (bool)sensorReader:(SRSensorReader *)arg1 fetchingRequest:(SRFetchRequest *)arg2 didFetchResult:(SRFetchResult *)arg3;
- (void)sensorReader:(SRSensorReader *)arg1 fetchingRequest:(SRFetchRequest *)arg2 failedWithError:(NSError *)arg3;
- (void)sensorReader:(SRSensorReader *)arg1 startRecordingFailedWithError:(NSError *)arg2;
- (void)sensorReader:(SRSensorReader *)arg1 stopRecordingFailedWithError:(NSError *)arg2;
- (void)sensorReaderDidStopRecording:(SRSensorReader *)arg1;
- (void)sensorReaderWillStartRecording:(SRSensorReader *)arg1;

@end
