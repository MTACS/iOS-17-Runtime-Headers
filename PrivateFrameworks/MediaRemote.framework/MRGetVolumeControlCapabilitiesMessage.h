
@interface MRGetVolumeControlCapabilitiesMessage : MRProtocolMessage

@property (nonatomic, readonly) NSString *outputDeviceUID;

- (id)initWithOutputDeviceUID:(id)arg1;
- (id)outputDeviceUID;
- (unsigned long long)type;

@end
