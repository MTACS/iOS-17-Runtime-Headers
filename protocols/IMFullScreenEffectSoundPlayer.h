
@protocol IMFullScreenEffectSoundPlayer <NSObject>

@required

- (<IMFullScreenEffectSoundPlayerDelegate> *)delegate;
- (id)initWithSoundURL:(NSURL *)arg1 hasHapticTrack:(bool)arg2;
- (void)prepareToPlaySound;
- (void)setDelegate:(id <IMFullScreenEffectSoundPlayerDelegate>)arg1;
- (void)startPlayingSound;
- (void)stopPlayingSound;

@end
