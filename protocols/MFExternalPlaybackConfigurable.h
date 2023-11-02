
@protocol MFExternalPlaybackConfigurable

@required

- (bool)allowsExternalPlayback;
- (long long)playbackType;
- (void)setAllowsExternalPlayback:(bool)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(bool)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(bool)arg1;
- (bool)usesAudioOnlyModeForExternalPlayback;
- (bool)usesExternalPlaybackWhileExternalScreenIsActive;

@end
