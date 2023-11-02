
@interface MRVolumeDidChangeMessage : MRProtocolMessage

@property (nonatomic, readonly) NSString *endpointUID;
@property (nonatomic, readonly) NSString *outputDeviceUID;
@property (nonatomic, readonly) float volume;

- (id)endpointUID;
- (id)initWithVolume:(float)arg1 endpointUID:(id)arg2 outputDeviceUID:(id)arg3;
- (id)outputDeviceUID;
- (unsigned long long)type;
- (float)volume;

@end
