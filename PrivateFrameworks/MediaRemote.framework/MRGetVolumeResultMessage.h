
@interface MRGetVolumeResultMessage : MRProtocolMessage

@property (nonatomic, readonly) float volume;

- (id)initWithVolume:(float)arg1;
- (unsigned long long)type;
- (float)volume;

@end
