
@interface HMDCompositeLanguageSetting : HMDCompositeSetting <HMDCompositeSettingsLanguageValueProviding> {
    NSString * _inputLanguageCode;
    NSString * _outputVoiceGenderCode;
    NSString * _outputVoiceLanguageCode;
    NSString * _voiceName;
}

@property (readonly, copy) NSString *inputLanguageCode;
@property (readonly, copy) NSString *outputVoiceGenderCode;
@property (readonly, copy) NSString *outputVoiceLanguageCode;
@property (readonly, copy) NSString *voiceName;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithInputLanguage:(id)arg1 outputVoiceLanguageCode:(id)arg2 outputVoiceGenderCode:(id)arg3 voiceName:(id)arg4 readVersion:(id)arg5 writeVersion:(id)arg6;
- (id)inputLanguageCode;
- (bool)isEqual:(id)arg1;
- (bool)isEqualValue:(id)arg1;
- (id)outputVoiceGenderCode;
- (id)outputVoiceLanguageCode;
- (id)voiceName;

@end
