
@protocol TTSAUMessaging

@required

- (NSDictionary *)defaultSettingsForVoice:(NSString *)arg1;
- (NSObject *)echo:(NSObject *)arg1;
- (NSArray *)hiddenParametersForVoice:(NSString *)arg1;
- (NSNumber *)requireFirstUnlockForVoiceLoad;
- (NSNumber *)voicesExternallyManaged;

@end
