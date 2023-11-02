
@protocol MPCPlayerResponseItemMusicAudio <NSObject>

@required

- (MPCPlayerAudioFormat *)activeFormat;
- (long long)activeFormatJustification;
- (NSArray *)alternateFormats;
- (MPCPlayerAudioRoute *)audioRoute;
- (MPCPlayerAudioFormat *)preferredFormat;
- (unsigned long long)preferredTiers;
- (MPCPlayerCommandRequest *)switchToAlternativeFormat:(MPCPlayerAudioFormat *)arg1;

@end
