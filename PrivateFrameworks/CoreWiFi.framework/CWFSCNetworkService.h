
@interface CWFSCNetworkService : NSObject {
    id /* block */  _eventHandler;
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSString * _interfaceName;
    bool  _isMonitoringEvents;
    bool  _isServiceEnabled;
    NSObject<OS_dispatch_queue> * _mutexQueue;
    struct __SCPreferences { } * _prefsRef;
    NSString * _serviceID;
    NSString * _serviceName;
    struct __SCDynamicStore { } * _storeRef;
}

@property (copy) id /* block */ eventHandler;
@property (nonatomic, readonly, copy) NSString *interfaceName;
@property (nonatomic, readonly, copy) NSString *serviceID;

- (void).cxx_destruct;
- (id)DHCPLeaseExpirationTimestamp;
- (id)DHCPLeaseStartTimestamp;
- (id)DHCPServerID;
- (id)DHCPv6ServerID;
- (id)DNSDomainName;
- (id)DNSServerAddresses;
- (id)IPv4ARPResolvedHardwareAddress;
- (id)IPv4ARPResolvedIPAddress;
- (id)IPv4Addresses;
- (id)IPv4ConfigMethod;
- (id)IPv4NetworkSignature;
- (id)IPv4Router;
- (id)IPv4SubnetMasks;
- (id)IPv6Addresses;
- (id)IPv6ConfigMethod;
- (id)IPv6NetworkSignature;
- (id)IPv6Router;
- (id)__DHCPInfo;
- (id)__DHCPStateConfig;
- (id)__DHCPv6StateConfig;
- (id)__DNSSetupConfig;
- (id)__DNSStateConfig;
- (id)__IPv4SetupConfig;
- (id)__IPv4StateConfig;
- (id)__IPv6SetupConfig;
- (id)__IPv6StateConfig;
- (id)__proxiesSetupConfig;
- (void)__refreshNotificationKeys;
- (bool)__refreshServiceID;
- (bool)__updateServiceID;
- (void)dealloc;
- (id /* block */)eventHandler;
- (id)init;
- (id)initWithInterfaceName:(id)arg1;
- (id)interfaceName;
- (bool)isMonitoringEvents;
- (bool)isServiceEnabled;
- (bool)refreshServiceID;
- (void)restartEventMonitoring;
- (id)serviceID;
- (id)serviceName;
- (void)setEventHandler:(id /* block */)arg1;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;

@end
