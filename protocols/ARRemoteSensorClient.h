
@protocol ARRemoteSensorClient <NSObject>

@required

- (void)sensorDidFailWithError:(NSError *)arg1;
- (void)sensorDidOutputSensorData:(id <ARSensorData>)arg1;
- (void)sensorDidPause;
- (void)sensorDidRestart;
- (void)sensorDidStart;

@end
