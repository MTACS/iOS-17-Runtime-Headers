
@protocol TTSPerVoiceSettingsViewControllerDelegate <NSObject>

@required

- (NSString *)getVoiceIdentifier;
- (NSDictionary *)getVoiceSettings;
- (void)voiceSettingsDidChangeForVoice:(NSString *)arg1 settings:(NSDictionary *)arg2;

@end
