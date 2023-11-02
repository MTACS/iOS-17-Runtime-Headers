
@interface MRMuteVolumeMessage : MRProtocolMessage

@property (nonatomic, readonly) MRRequestDetails *details;
@property (getter=isMuted, nonatomic, readonly) bool muted;
@property (nonatomic, readonly) NSString *outputDeviceUID;

- (id)details;
- (id)initWithMuted:(bool)arg1 outputDeviceUID:(id)arg2 details:(id)arg3;
- (bool)isMuted;
- (id)outputDeviceUID;
- (unsigned long long)type;

@end
