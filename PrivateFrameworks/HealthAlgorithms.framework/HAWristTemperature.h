
@interface HAWristTemperature : NSObject {
    NSMeasurement * _computedTemperature;
    NSMeasurement * _computedTemperatureErrorEstimate;
    unsigned long long  _dataValidity;
    NSMeasurement * _sensor1Temperature;
    NSMeasurement * _sensor2Temperature;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) NSMeasurement *computedTemperature;
@property (nonatomic, readonly) NSMeasurement *computedTemperatureErrorEstimate;
@property (nonatomic, readonly) unsigned long long dataValidity;
@property (nonatomic, readonly) NSMeasurement *sensor1Temperature;
@property (nonatomic, readonly) NSMeasurement *sensor2Temperature;
@property (nonatomic, readonly) NSDate *timestamp;

- (void).cxx_destruct;
- (id)computedTemperature;
- (id)computedTemperatureErrorEstimate;
- (unsigned long long)dataValidity;
- (id)initWithComputedTemperatureErrorEstimate:(id)arg1 computedTemperature:(id)arg2 sensor1Temperature:(id)arg3 sensor2Temperature:(id)arg4 dataValidity:(unsigned long long)arg5 timestamp:(id)arg6;
- (id)sensor1Temperature;
- (id)sensor2Temperature;
- (id)timestamp;

@end
