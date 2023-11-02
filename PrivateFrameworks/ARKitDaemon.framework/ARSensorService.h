
@interface ARSensorService : ARDaemonService <ARRemoteSensorService, ARSensorDelegate> {
    <ARRemoteSensorClient> * _clientProxy;
    <ARSensor> * _sensor;
}

@property (nonatomic, retain) <ARRemoteSensorClient> *clientProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <ARSensor> *sensor;
@property (readonly) Class superclass;

+ (bool)isSupported;

- (void).cxx_destruct;
- (id)clientProxy;
- (id)initWithConnection:(id)arg1;
- (void)providedDataTypesWithReply:(id /* block */)arg1;
- (id)sensor;
- (void)sensor:(id)arg1 didFailWithError:(id)arg2;
- (void)sensor:(id)arg1 didOutputSensorData:(id)arg2;
- (void)sensorDidPause:(id)arg1;
- (void)sensorDidRestart:(id)arg1;
- (void)sensorDidStart:(id)arg1;
- (void)setClientProxy:(id)arg1;
- (void)setSensor:(id)arg1;
- (void)start;
- (void)stop;

@end
