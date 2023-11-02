
@interface MRVolumeMutedDidChangeMessage : MRProtocolMessage

@property (getter=isMuted, nonatomic, readonly) bool muted;
@property (nonatomic, readonly) NSString *outputDeviceUID;

- (id)initWithMuted:(bool)arg1 outputDeviceUID:(id)arg2;
- (bool)isMuted;
- (id)outputDeviceUID;
- (unsigned long long)type;

@end
