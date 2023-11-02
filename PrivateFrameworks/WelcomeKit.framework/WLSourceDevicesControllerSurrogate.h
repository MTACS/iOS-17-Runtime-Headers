
@interface WLSourceDevicesControllerSurrogate : WLSourceDevicesController {
    NSString * _deviceDiscoverySession;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _wifiStarted;
}

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1;
- (void)scheduleSurrogateDeviceDiscovery;
- (void)startWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (void)stopDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (void)stopWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)arg1;

@end
