
@interface VUIPlayer : TVPPlayer

+ (void)initialize;
+ (id)savedPreferredAudioLanguageCode;
+ (void)updateSupplementaryAvailableAudioLanguageCodes:(id)arg1;

- (void)_configurePlayerForCurrentNetworkSettingsAndMediaItem;
- (void)_currentMediaItemDidChange:(id)arg1;
- (void)_videoPlaybackSettingsDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end
