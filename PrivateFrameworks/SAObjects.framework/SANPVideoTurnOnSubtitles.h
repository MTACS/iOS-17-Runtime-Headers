
@interface SANPVideoTurnOnSubtitles : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *desiredOptionId;
@property (nonatomic, copy) NSString *languageOptionChangeUserSetting;

+ (id)turnOnSubtitles;
+ (id)turnOnSubtitlesWithDictionary:(id)arg1 context:(id)arg2;

- (id)desiredOptionId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)languageOptionChangeUserSetting;
- (bool)requiresResponse;
- (void)setDesiredOptionId:(id)arg1;
- (void)setLanguageOptionChangeUserSetting:(id)arg1;

@end
