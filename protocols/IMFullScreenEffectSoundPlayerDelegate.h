
@protocol IMFullScreenEffectSoundPlayerDelegate <NSObject>

@optional

- (void)fullScreenEffectSoundPlayerDidPrepare:(id <IMFullScreenEffectSoundPlayer>)arg1;
- (void)fullScreenEffectSoundPlayerDidStartPlaying:(id <IMFullScreenEffectSoundPlayer>)arg1;
- (void)fullScreenEffectSoundPlayerDidStopPlaying:(id <IMFullScreenEffectSoundPlayer>)arg1;

@end
