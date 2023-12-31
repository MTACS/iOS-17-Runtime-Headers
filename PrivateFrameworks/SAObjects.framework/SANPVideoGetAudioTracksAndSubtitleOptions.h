
@interface SANPVideoGetAudioTracksAndSubtitleOptions : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *desiredLanguage;

+ (id)getAudioTracksAndSubtitleOptions;
+ (id)getAudioTracksAndSubtitleOptionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)desiredLanguage;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setDesiredLanguage:(id)arg1;

@end
