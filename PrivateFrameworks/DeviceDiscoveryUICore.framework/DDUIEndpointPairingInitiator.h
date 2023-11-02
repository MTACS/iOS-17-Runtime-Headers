
@interface DDUIEndpointPairingInitiator : NSObject {
    unsigned int  _acceptedDeviceTypes;
    id /* block */  _availableDevicesChangedHandler;
    <DDUIEndpointPairingBrowsingTransport> * _transport;
}

@property (nonatomic) unsigned int acceptedDeviceTypes;
@property (nonatomic, readonly) NSArray *availableDevices;
@property (nonatomic, copy) id /* block */ availableDevicesChangedHandler;
@property (nonatomic, retain) <DDUIEndpointPairingBrowsingTransport> *transport;

- (void).cxx_destruct;
- (unsigned int)acceptedDeviceTypes;
- (id)availableDevices;
- (id /* block */)availableDevicesChangedHandler;
- (void)beginWithCompletion:(id /* block */)arg1;
- (id)initForDeviceTypes:(unsigned int)arg1 withTransport:(id)arg2;
- (void)invalidate;
- (id)pairingSessionForDevice:(id)arg1 bundleID:(id)arg2 serviceIdentifier:(id)arg3 error:(id*)arg4;
- (void)setAcceptedDeviceTypes:(unsigned int)arg1;
- (void)setAvailableDevicesChangedHandler:(id /* block */)arg1;
- (void)setTransport:(id)arg1;
- (id)transport;

@end
