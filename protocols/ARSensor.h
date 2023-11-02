
@protocol ARSensor <NSObject>

@required

- (<ARSensorDelegate> *)delegate;
- (unsigned long long)providedDataTypes;
- (void)setDelegate:(id <ARSensorDelegate>)arg1;
- (void)start;
- (void)stop;

@optional

- (void)forceUpdatePowerUsage:(unsigned long long)arg1;
- (unsigned long long)powerUsage;
- (void)setPowerUsage:(unsigned long long)arg1;
- (void)waitForOutstandingCallbacks;

@end
