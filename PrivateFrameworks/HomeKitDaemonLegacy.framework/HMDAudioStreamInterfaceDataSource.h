
@interface HMDAudioStreamInterfaceDataSource : HMFObject <HMDAudioStreamInterfaceDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMuted) bool muted;
@property (readonly) Class superclass;

- (bool)isMuted;
- (void)setAudioSessionPropertiesWithShouldAllowSystemSounds:(bool)arg1;
- (void)setMuted:(bool)arg1;

@end
