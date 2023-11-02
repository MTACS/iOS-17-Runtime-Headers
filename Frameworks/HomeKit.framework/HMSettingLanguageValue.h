
@interface HMSettingLanguageValue : HMImmutableSettingValue {
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
- (unsigned long long)hash;
- (id)initWithInputLanguageCode:(id)arg1 outputVoiceLanguageCode:(id)arg2 outputVoiceGenderCode:(id)arg3;
- (id)initWithInputLanguageCode:(id)arg1 outputVoiceLanguageCode:(id)arg2 outputVoiceGenderCode:(id)arg3 voiceName:(id)arg4;
- (id)initWithPayload:(id)arg1;
- (id)initWithProtoPayload:(id)arg1;
- (id)inputLanguageCode;
- (bool)isEqual:(id)arg1;
- (id)outputVoiceGenderCode;
- (id)outputVoiceLanguageCode;
- (id)payloadCopy;
- (id)protoPayload;
- (id)voiceName;

@end
