
@protocol _SFPBRunVoiceShortcutCommand <NSObject>

@required

- (NSString *)applicationBundleIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setVoiceShortcutIdentifier:(NSString *)arg1;
- (NSString *)voiceShortcutIdentifier;

@end
