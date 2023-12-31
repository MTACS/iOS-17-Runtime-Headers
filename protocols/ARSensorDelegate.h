
@protocol ARSensorDelegate <NSObject>

@required

- (void)sensor:(id <ARSensor>)arg1 didFailWithError:(NSError *)arg2;
- (void)sensor:(id <ARSensor>)arg1 didOutputSensorData:(id <ARSensorData>)arg2;

@optional

- (void)sensorDidPause:(id <ARSensor>)arg1;
- (void)sensorDidRestart:(id <ARSensor>)arg1;
- (void)sensorDidStart:(id <ARSensor>)arg1;

@end
