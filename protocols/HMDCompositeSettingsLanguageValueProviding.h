
@protocol HMDCompositeSettingsLanguageValueProviding

@required

- (NSString *)inputLanguageCode;
- (NSString *)outputVoiceGenderCode;
- (NSString *)outputVoiceLanguageCode;
- (NSString *)voiceName;

@end
