
@interface CWFSCNetworkConfiguration : NSObject {
    id /* block */  _eventHandler;
    NSObject<OS_dispatch_queue> * _eventQueue;
    bool  _isMonitoringEvents;
    NSObject<OS_dispatch_queue> * _mutexQueue;
    struct __SCDynamicStore { } * _storeRef;
}

@property (copy) id /* block */ eventHandler;

- (void).cxx_destruct;
- (id)DNSDomainName;
- (id)DNSSearchDomains;
- (id)DNSServerAddresses;
- (id)IEEE80211NetworkInterfacesNames;
- (id)IPv4Addresses;
- (id)IPv4InterfaceName;
- (id)IPv4Router;
- (id)IPv4ServiceID;
- (id)IPv4ServiceName;
- (id)IPv4SubnetMasks;
- (id)IPv6Addresses;
- (id)IPv6InterfaceName;
- (id)IPv6PrefixLengths;
- (id)IPv6Router;
- (id)IPv6ServiceID;
- (id)IPv6ServiceName;
- (id)__DNSGlobalStateConfig;
- (id)__IPv4GlobalStateConfig;
- (id)__IPv4SetupConfigForServiceID:(id)arg1;
- (id)__IPv4StateConfigForServiceID:(id)arg1;
- (id)__IPv6GlobalStateConfig;
- (id)__IPv6SetupConfigForServiceID:(id)arg1;
- (id)__IPv6StateConfigForServiceID:(id)arg1;
- (bool)__isIEEE80211NetworkInterfaceName:(id)arg1;
- (id)__nameForServiceWithID:(id)arg1;
- (id)__networkInterfaceStateConfig;
- (void)__startEventMonitoring;
- (void)dealloc;
- (id /* block */)eventHandler;
- (id)init;
- (bool)isMonitoringEvents;
- (id)networkInterfaceNames;
- (void)restartEventMonitoring;
- (void)setEventHandler:(id /* block */)arg1;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;

@end
