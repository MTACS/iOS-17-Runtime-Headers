
@protocol SRSensorPrunerDelegate <NSObject>

@optional

- (void)sensorPrunerDidStopPruning:(SRSensorPruner *)arg1;
- (void)sensorPrunerDidStopPruningAllData:(SRSensorPruner *)arg1;

@end
