
@protocol SRSensorWriterDelegate <NSObject>

@optional

- (void)sensorWriterDidStopMonitoring:(SRSensorWriter *)arg1;
- (void)sensorWriterWillStartMonitoring:(SRSensorWriter *)arg1;

@end
