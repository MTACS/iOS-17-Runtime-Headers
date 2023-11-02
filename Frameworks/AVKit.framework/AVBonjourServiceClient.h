
@interface AVBonjourServiceClient : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    void * _airplayDeviceRef;
    <AVBonjourServiceClientDelegate> * _delegate;
    bool  _discovering;
    NSMutableSet * _monitoringServices;
    NSNetServiceBrowser * _netServiceBrowser;
    NSMutableDictionary * _netServiceIdentifierToChannel;
    id  _observeAirPlayVideoActiveDidChange;
    id  _observeMRDeviceInfoDidChange;
    NSMutableSet * _resolvedServices;
    NSMutableSet * _resolvingServices;
    NSString * _serviceType;
}

@property (nonatomic) void*airplayDeviceRef;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVBonjourServiceClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNetServiceBrowser *netServiceBrowser;
@property (nonatomic, readonly) NSString *serviceType;
@property (readonly) Class superclass;

+ (id)dictionaryFromTXTRecordData:(id)arg1;

- (void).cxx_destruct;
- (bool)_isServiceForCurrentAirPlayDevice:(id)arg1;
- (void)_updatedAirPlayPairedDeviceAsync;
- (id)airTransportSenderForNetService:(id)arg1;
- (void*)airplayDeviceRef;
- (void)beginDiscovery;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endDiscovery;
- (id)identifierForNetService:(id)arg1;
- (id)initWithNetServiceType:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (id)netServiceBrowser;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netServiceWillResolve:(id)arg1;
- (id)serviceType;
- (void)setAirplayDeviceRef:(void*)arg1;
- (void)setDelegate:(id)arg1;

@end
