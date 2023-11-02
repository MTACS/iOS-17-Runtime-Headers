
@interface ATXContextSourcesGuardedData : NSObject {
    ATXAmbientLightMonitor * _ambientLightMonitor;
    _ATXAppInfoManager * _appInfoManager;
    bool  _biomeStreamsInitialized;
    bool  _contextSourcesInitialized;
    Class  _deviceStateMonitorClass;
    ATXLocationManager * _locationManager;
    ATXMotionManagerWrapper * _motionManagerWrapper;
    ATXBiomePredictionContextStream * _predictionContextStream;
}

@property (nonatomic, readonly) ATXAmbientLightMonitor *ambientLightMonitor;
@property (nonatomic, readonly) _ATXAppInfoManager *appInfoManager;
@property (nonatomic, readonly) bool biomeStreamsInitialized;
@property (nonatomic, readonly) bool contextSourcesInitialized;
@property (nonatomic, readonly) Class deviceStateMonitorClass;
@property (nonatomic, readonly) ATXLocationManager *locationManager;
@property (nonatomic, readonly) ATXMotionManagerWrapper *motionManagerWrapper;
@property (nonatomic, readonly) ATXBiomePredictionContextStream *predictionContextStream;

- (void).cxx_destruct;
- (id)ambientLightMonitor;
- (id)appInfoManager;
- (bool)biomeStreamsInitialized;
- (bool)contextSourcesInitialized;
- (Class)deviceStateMonitorClass;
- (id)locationManager;
- (id)motionManagerWrapper;
- (id)predictionContextStream;
- (void)updateAppInfoManager:(id)arg1 locationManager:(id)arg2 motionManagerWrapper:(id)arg3 ambientLightMonitor:(id)arg4 deviceStateMonitorClass:(Class)arg5 contextSourcesInitialized:(bool)arg6;
- (void)updatePredictionContextStream:(id)arg1 biomeStreamsInitialized:(bool)arg2;

@end
