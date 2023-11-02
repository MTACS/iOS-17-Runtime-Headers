
@interface MRDiscoveryUpdateOutputDevicesMessage : MRProtocolMessage {
    MRAVRoutingDiscoverySessionConfiguration * _configuration;
    NSArray * _outputDevices;
}

@property (nonatomic, readonly) MRAVRoutingDiscoverySessionConfiguration *configuration;
@property (nonatomic, readonly) NSArray *outputDevices;

- (void).cxx_destruct;
- (id)configuration;
- (id)initWithOutputDevices:(id)arg1 configuration:(id)arg2;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;
- (id)outputDevices;
- (unsigned long long)type;

@end
