
@interface PPSClient : NSObject {
    PPSMetricMonitorConfiguration * _config;
    NSXPCConnection * _connection;
    NSNumber * _monitoredPID;
    <PPSMetricMonitorClientInterface> * _remoteProxy;
}

@property (retain) PPSMetricMonitorConfiguration *config;
@property (retain) NSXPCConnection *connection;
@property (retain) NSNumber *monitoredPID;
@property (retain) <PPSMetricMonitorClientInterface> *remoteProxy;

- (void).cxx_destruct;
- (id)config;
- (id)connection;
- (id)initWithConnection:(id)arg1 remoteProxy:(id)arg2;
- (id)monitoredPID;
- (id)remoteProxy;
- (void)setConfig:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setMonitoredPID:(id)arg1;
- (void)setRemoteProxy:(id)arg1;

@end
