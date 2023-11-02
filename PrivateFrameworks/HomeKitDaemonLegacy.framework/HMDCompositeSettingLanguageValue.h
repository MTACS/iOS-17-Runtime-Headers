
@interface HMDCompositeSettingLanguageValue : HMDCompositeSettingValue <HMDCompositeSettingsLanguageValueProviding> {
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
- (id)initWithInputLanguage:(id)arg1 outputVoiceLanguageCode:(id)arg2 outputVoiceGenderCode:(id)arg3 voiceName:(id)arg4;
- (id)inputLanguageCode;
- (id)outputVoiceGenderCode;
- (id)outputVoiceLanguageCode;
- (id)voiceName;

@end
