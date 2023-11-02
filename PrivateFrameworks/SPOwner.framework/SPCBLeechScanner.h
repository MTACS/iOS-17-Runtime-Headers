
@interface SPCBLeechScanner : NSObject <CBCentralManagerDelegate> {
    CBCentralManager * _centralManager;
    bool  _enabled;
    bool  _isScanning;
    int  _notifyToken;
    <SPCBPeripheralManagementXPCProtocol> * _proxy;
    FMQueueSynchronizer * _queueSynchronizer;
    NSObject<OS_dispatch_queue> * _serialQueue;
    FMXPCServiceDescription * _serviceDescription;
    FMXPCSession * _session;
}

@property (nonatomic, retain) CBCentralManager *centralManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isScanning;
@property (nonatomic) int notifyToken;
@property (nonatomic, retain) <SPCBPeripheralManagementXPCProtocol> *proxy;
@property (nonatomic, retain) FMQueueSynchronizer *queueSynchronizer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;
@property (nonatomic, retain) FMXPCSession *session;
@property (readonly) Class superclass;

+ (id)remoteInterface;

- (void).cxx_destruct;
- (id)centralManager;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (bool)enabled;
- (void)handleStateChange:(unsigned long long)arg1;
- (id)init;
- (void)interruptionHandler:(id)arg1;
- (void)invalidationHandler:(id)arg1;
- (bool)isScanning;
- (int)notifyToken;
- (id)proxy;
- (id)queueSynchronizer;
- (id)serialQueue;
- (id)serviceDescription;
- (id)session;
- (void)setCentralManager:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIsScanning:(bool)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setProxy:(id)arg1;
- (void)setQueueSynchronizer:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setSession:(id)arg1;
- (void)startScanning;
- (void)stopScanning;

@end
