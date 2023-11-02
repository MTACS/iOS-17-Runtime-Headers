
@interface MRGetVolumeMutedResultMessage : MRProtocolMessage

@property (getter=isMuted, nonatomic, readonly) bool muted;

- (id)initWithMuted:(bool)arg1;
- (bool)isMuted;
- (unsigned long long)type;

@end
