
@interface FigCaptureImageSensorTemperatureMonitor : NSObject {
    int  _currentSystemPressureFromImageSensorTemperature;
    NSObject<OS_dispatch_source> * _nominalImageSensorTemperatureMonitorTimer;
    NSString * _portType;
    struct { 
        float min; 
        float max; 
    }  _systemPressureLevelByImageSensorTemperature;
}

@property (readonly) int systemPressureLevelFromImageSensorTemperature;

+ (void)initialize;

- (void)dealloc;
- (id)initWithPortType:(id)arg1 sensorThermalLevelsByTemperature:(id)arg2;
- (void)startMonitoringImageSensorTemperatureUntilNominalWithQueue:(id)arg1 changeHandler:(id /* block */)arg2;
- (int)systemPressureLevelFromImageSensorTemperature;
- (void)updateWithImageSensorTemperature:(float)arg1;

@end
