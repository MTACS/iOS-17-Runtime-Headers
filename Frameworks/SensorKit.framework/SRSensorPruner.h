
@interface SRSensorPruner : NSObject <SRDaemonNotificationDelegate> {
    NSXPCConnection * _connection;
    bool  _connectionDidInterrupt;
    bool  _connectionDidInvalidate;
    SRDaemonNotification * _daemonNotification;
    SRDatastore * _datastore;
    <SRSensorPrunerDelegate> * _delegate;
    SRDevice * _device;
    NSDictionary * _nextDatastoreFiles;
    NSString * _sensor;
}

@property (retain) NSXPCConnection *connection;
@property bool connectionDidInterrupt;
@property bool connectionDidInvalidate;
@property (readonly, retain) SRDatastore *datastore;
@property (readonly, copy) NSString *debugDescription;
@property <SRSensorPrunerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) SRDevice *device;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *nextDatastoreFiles;
@property (copy) NSString *sensor;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)connectionToDaemon;
+ (void)initialize;
+ (id)remoteInterface;
+ (void)removeAllSamplesForAllSensorsWithCompletionHandler:(id /* block */)arg1;
+ (void)removeAllSamplesForAllSensorsWithConnection:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)connection;
- (bool)connectionDidInterrupt;
- (bool)connectionDidInvalidate;
- (void)continuePruneFrom:(double)arg1 to:(double)arg2 withDatastoreFiles:(id)arg3;
- (void)daemonNotificationDaemonDidStart:(id)arg1;
- (id)datastore;
- (void)dealloc;
- (id)delegate;
- (id)device;
- (id)initWithSensor:(id)arg1 device:(id)arg2;
- (id)initWithSensor:(id)arg1 xpcConnection:(id)arg2 daemonNotification:(id)arg3 device:(id)arg4;
- (id)nextDatastoreFiles;
- (void)registerWithDaemonIfNeededWithReply:(id /* block */)arg1;
- (void)removeAllSamples;
- (void)removeSamplesFrom:(double)arg1 to:(double)arg2;
- (void)removeSamplesFrom:(double)arg1 to:(double)arg2 inSegment:(id)arg3;
- (void)resetDatastoreFiles:(id)arg1;
- (id)sensor;
- (void)setConnection:(id)arg1;
- (void)setConnectionDidInterrupt:(bool)arg1;
- (void)setConnectionDidInvalidate:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setNextDatastoreFiles:(id)arg1;
- (void)setSensor:(id)arg1;
- (void)setupConnection;

@end
