
@interface MRCreateHostedEndpointRequestMessage : MRProtocolMessage

@property (nonatomic, readonly) NSArray *outputDeviceUIDs;

- (id)initWithOutputDeviceUIDs:(id)arg1;
- (id)outputDeviceUIDs;
- (unsigned long long)type;

@end
