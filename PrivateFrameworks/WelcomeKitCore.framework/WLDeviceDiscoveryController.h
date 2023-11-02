
@interface WLDeviceDiscoveryController : NSObject <WLDeviceDiscoverySocketHandlerDelegate> {
    NSString * _allowedAddress;
    WLAutomation * _automation;
    unsigned long long  _countOfPairingAttemptsWithCurrentSecret;
    NSObject<OS_dispatch_source> * _incomingConnSource;
    int  _listenerSocket;
    id /* block */  _nextIncomingConnectionHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _socketHandlers;
    NSMutableArray * _sourceDevices;
    NSString * _ssid;
    bool  _starting;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) WLSourceDevice *sourceDevice;
@property (nonatomic, copy) NSString *ssid;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_allowConnectionsFromAnyAddress;
- (id)_generatePairingSecret;
- (void)_postSourceDevicesDidChangeNotification;
- (void)_queue_startDiscoveryWithPreGeneratedCode:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_stopDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (void)_queue_stopWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (bool)_shouldForceDiscoveryError;
- (id)_ssidWithSecret:(id)arg1;
- (int)acceptIncomingConnectionWithListenerSocket:(int)arg1 nonBlocking:(bool)arg2;
- (void)attemptDirectConnectionToAddress:(id)arg1;
- (int)createListenerSocketOnPort:(unsigned long long)arg1;
- (void)deviceDiscoverySocketHandler:(id)arg1 didDiscoverCandidate:(id)arg2;
- (void)deviceDiscoverySocketHandler:(id)arg1 didFailToHandshakeWithSourceDevice:(id)arg2 error:(id)arg3;
- (void)deviceDiscoverySocketHandler:(id)arg1 didFinishHandshakeWithSourceDevice:(id)arg2;
- (void)enableSoftAPWithSSID:(id)arg1 password:(id)arg2 channels:(id)arg3 secret:(id)arg4 srp:(id)arg5 completion:(id /* block */)arg6;
- (void)importLocalContent;
- (id)init;
- (id)listenForConnectionOnSocket:(int)arg1 withConnectionHandler:(id /* block */)arg2;
- (void)listenerDidStart:(int)arg1 srp:(id)arg2;
- (id)queue;
- (void)setNextIncomingConnectionHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setSsid:(id)arg1;
- (void)softAPDidStart:(bool)arg1 ssid:(id)arg2 psk:(id)arg3 secret:(id)arg4 srp:(id)arg5 error:(id)arg6 completion:(id /* block */)arg7;
- (id)sourceDevice;
- (id)ssid;
- (void)startWiFiAndDeviceDiscoveryWithPreGeneratedCode:(id)arg1 completion:(id /* block */)arg2;
- (void)stopDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (void)stopWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (bool)supportsLocalImport;

@end
