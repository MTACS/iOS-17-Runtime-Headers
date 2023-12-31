
@interface SANPVideoSetAutoSubtitles : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *languageOptionChangeUserSetting;

+ (id)setAutoSubtitles;
+ (id)setAutoSubtitlesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)languageOptionChangeUserSetting;
- (bool)requiresResponse;
- (void)setLanguageOptionChangeUserSetting:(id)arg1;

@end
