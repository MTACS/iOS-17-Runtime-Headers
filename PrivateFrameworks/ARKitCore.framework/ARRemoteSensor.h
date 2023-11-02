
@interface ARRemoteSensor : NSObject <ARRemoteSensorClient, ARSensor, ARServerConnectionDelegate> {
    <ARSensorDelegate> * _delegate;
    bool  _running;
    ARServerConnection * _serverConnection;
    <ARRemoteSensorService> * _serviceProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long powerUsage;
@property (getter=isRunning) bool running;
@property (nonatomic, readonly) ARServerConnection *serverConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithServerConnection:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (bool)isRunning;
- (unsigned long long)providedDataTypes;
- (void)sensorDidFailWithError:(id)arg1;
- (void)sensorDidOutputSensorData:(id)arg1;
- (void)sensorDidPause;
- (void)sensorDidRestart;
- (void)sensorDidStart;
- (id)serverConnection;
- (void)setDelegate:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)start;
- (void)stop;

@end
