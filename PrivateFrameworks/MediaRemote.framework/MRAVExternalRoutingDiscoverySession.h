
@interface MRAVExternalRoutingDiscoverySession : MRAVRoutingDiscoverySession {
    MRAVRoutingDiscoverySessionConfiguration * _configuration;
    MRAVEndpoint * _destination;
    unsigned int  _discoveryMode;
    MRExternalDevice * _externalDevice;
    id  _externalDeviceDiscoveryToken;
}

@property (nonatomic, retain) MRAVEndpoint *destination;
@property (nonatomic, retain) MRExternalDevice *externalDevice;

- (void).cxx_destruct;
- (id)availableEndpoints;
- (id)availableOutputDevices;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)destination;
- (id)destinationOutputDeviceUID;
- (bool)devicePresenceDetected;
- (unsigned int)discoveryMode;
- (unsigned int)endpointFeatures;
- (id)externalDevice;
- (id)initWithConfiguration:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDiscoveryMode:(unsigned int)arg1;
- (void)setExternalDevice:(id)arg1;

@end
