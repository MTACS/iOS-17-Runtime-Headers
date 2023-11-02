
@interface NRDeviceMonitor : NSObject {
    NSObject<OS_xpc_object> * _connection;
    <NRDeviceMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _didIssueFirstUpdate;
    NRDeviceIdentifier * _internalDeviceIdentifier;
    bool  _internalHasUnpairedBluetooth;
    bool  _internalIsAsleep;
    bool  _internalIsClassCConnected;
    bool  _internalIsCloudConnected;
    bool  _internalIsConnected;
    bool  _internalIsEnabled;
    bool  _internalIsNearby;
    bool  _internalIsRegistered;
    unsigned char  _internalLinkSubtype;
    unsigned char  _internalLinkType;
    NSString * _internalProxySvcIntfName;
    int  _internalThermalPressureLevel;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) NRDeviceIdentifier *deviceIdentifier;
@property (nonatomic, readonly) bool isAsleep;
@property (nonatomic, readonly) bool isClassCConnected;
@property (nonatomic, readonly) bool isCloudConnected;
@property (nonatomic, readonly) bool isConnected;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) bool isNearby;
@property (nonatomic, readonly) bool isRegistered;
@property (nonatomic, readonly) unsigned char linkSubtype;
@property (nonatomic, readonly) unsigned char linkType;
@property (nonatomic, readonly) NSString *proxyServiceInterfaceName;
@property (nonatomic, readonly) int thermalPressureLevel;

- (void).cxx_destruct;
- (void)dealloc;
- (id)deviceIdentifier;
- (id)initWithDeviceIdentifier:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (bool)isAsleep;
- (bool)isClassCConnected;
- (bool)isCloudConnected;
- (bool)isConnected;
- (bool)isEnabled;
- (bool)isNearby;
- (bool)isRegistered;
- (unsigned char)linkSubtype;
- (unsigned char)linkType;
- (id)proxyServiceInterfaceName;
- (int)thermalPressureLevel;

@end
