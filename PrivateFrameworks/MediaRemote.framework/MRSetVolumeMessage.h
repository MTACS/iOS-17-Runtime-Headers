
@interface MRSetVolumeMessage : MRProtocolMessage

@property (nonatomic, readonly) MRRequestDetails *details;
@property (nonatomic, readonly) NSString *outputDeviceUID;
@property (nonatomic, readonly) float volume;

- (id)details;
- (id)initWithVolume:(float)arg1;
- (id)initWithVolume:(float)arg1 outputDeviceUID:(id)arg2 details:(id)arg3;
- (id)outputDeviceUID;
- (unsigned long long)type;
- (float)volume;

@end
