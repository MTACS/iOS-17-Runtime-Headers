
@interface CWFSCNetworkInterface : NSObject {
    id /* block */  _eventHandler;
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSString * _hardwareAddress;
    NSString * _interfaceName;
    bool  _isMonitoringEvents;
    NSObject<OS_dispatch_queue> * _mutexQueue;
    struct __SCDynamicStore { } * _storeRef;
}

@property (copy) id /* block */ eventHandler;
@property (nonatomic, readonly, copy) NSString *hardwareAddress;
@property (nonatomic, readonly, copy) NSString *interfaceName;

- (void).cxx_destruct;
- (id)IPv4Addresses;
- (id)IPv4BroadcastAddresses;
- (id)IPv4SubnetMasks;
- (id)IPv6Addresses;
- (id)IPv6Flags;
- (id)IPv6PrefixLengths;
- (id)__IPv4StateConfig;
- (id)__IPv6StateConfig;
- (id)__linkStateConfig;
- (id)__networkInterfaceHardwareAddress;
- (void)__startEventMonitoring;
- (id)airPortSetupConfiguration;
- (id)airPortStateConfiguration;
- (void)dealloc;
- (id /* block */)eventHandler;
- (id)hardwareAddress;
- (id)init;
- (id)initWithInterfaceName:(id)arg1;
- (id)interfaceName;
- (bool)isLinkActive;
- (bool)isMonitoringEvents;
- (void)restartEventMonitoring;
- (void)setEventHandler:(id /* block */)arg1;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;

@end
