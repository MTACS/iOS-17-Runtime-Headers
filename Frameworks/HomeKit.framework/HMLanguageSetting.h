
@interface HMLanguageSetting : HMImmutableSetting {
    HMSettingLanguageValue * _languageValue;
}

@property (readonly) HMSettingLanguageValue *languageValue;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithKeyPath:(id)arg1 readOnly:(bool)arg2 languageValue:(id)arg3;
- (id)initWithKeyPath:(id)arg1 readOnly:(bool)arg2 payload:(id)arg3;
- (id)initWithProtoPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)languageValue;
- (id)payloadCopy;
- (id)protoPayload;
- (id)settingValue;
- (id)settingWithSettingValue:(id)arg1;

@end
