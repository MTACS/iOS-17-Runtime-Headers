
@interface FigCaptureSystemPressureMonitor : NSObject {
    int  _currentSystemPressureFromPeakPower;
    int  _currentSystemPressureFromProjectorTemperature;
    int  _currentSystemPressureFromThermalPressure;
    NSMutableDictionary * _imageSensorTemperatureMonitorByPortType;
    int  _peakPowerNotificationToken;
    NSObject<OS_dispatch_source> * _pearlPollTimer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _pollingTimerStopTime;
    int  _systemPressureLevelByPeakPowerLevel;
    struct { 
        float min; 
        float max; 
    }  _systemPressureLevelByProjectorTemperature;
    int  _systemPressureLevelByThermalPressureLevel;
    id /* block */  _systemPressureLevelChangedHandler;
    NSObject<OS_dispatch_queue> * _systemPressureLevelChangedHandlerQueue;
    int  _thermalPressureNotificationToken;
}

@property (copy) id /* block */ systemPressureLevelChangedHandler;
@property (readonly) int systemPressureLevelFromPearlProjector;

+ (void)initialize;

- (void)callSystemPressureLevelChangedHandler;
- (void)dealloc;
- (id)initWithPearlModuleType:(int)arg1 sensorThermalLevelsByTemperatureByPortType:(id)arg2;
- (void)setSystemPressureLevelChangedHandler:(id /* block */)arg1;
- (void)startMonitoringImageSensorTemperatureUntilNominalWithPortType:(id)arg1;
- (void)startMonitoringPearlProjectorTemperatureUntilNominal;
- (id /* block */)systemPressureLevelChangedHandler;
- (int)systemPressureLevelFromImageSensorWithPortType:(id)arg1;
- (int)systemPressureLevelFromPearlProjector;
- (void)updateWithPearlProjectorTemperature:(float)arg1;
- (void)updateWithPortType:(id)arg1 imageSensorTemperature:(float)arg2;

@end
