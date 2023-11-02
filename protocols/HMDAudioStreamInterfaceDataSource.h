
@protocol HMDAudioStreamInterfaceDataSource <NSObject>

@required

- (bool)isMuted;
- (void)setAudioSessionPropertiesWithShouldAllowSystemSounds:(bool)arg1;
- (void)setMuted:(bool)arg1;

@end
