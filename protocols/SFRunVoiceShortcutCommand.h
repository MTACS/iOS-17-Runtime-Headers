
@protocol SFRunVoiceShortcutCommand <SFCommand>

@required

- (NSString *)applicationBundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setVoiceShortcutIdentifier:(NSString *)arg1;
- (NSString *)voiceShortcutIdentifier;

@end
