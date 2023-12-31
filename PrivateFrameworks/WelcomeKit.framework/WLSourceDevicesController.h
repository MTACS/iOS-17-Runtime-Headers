
@interface WLSourceDevicesController : WLDaemonConnection {
    <WLSourceDevicesDelegate> * _delegate;
}

@property (nonatomic) <WLSourceDevicesDelegate> *delegate;

- (void).cxx_destruct;
- (void)attemptDirectConnectionToAddress:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (void)stopDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (void)stopWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)arg1;

@end
