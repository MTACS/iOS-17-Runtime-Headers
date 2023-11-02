
@interface MRVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int capabilities;
@property (nonatomic, readonly) NSString *endpointUID;
@property (nonatomic, readonly) NSString *outputDeviceUID;

- (unsigned int)capabilities;
- (id)endpointUID;
- (id)initWithCapabilities:(unsigned int)arg1 endpointUID:(id)arg2 outputDeviceUID:(id)arg3;
- (id)outputDeviceUID;
- (unsigned long long)type;

@end
