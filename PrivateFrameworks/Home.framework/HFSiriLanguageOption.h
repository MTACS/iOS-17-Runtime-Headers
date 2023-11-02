
@interface HFSiriLanguageOption : NSObject <NAIdentifiable> {
    bool  _defaultVoiceForRecognitionLanguage;
    long long  _outputGender;
    NSString * _outputLanguage;
    NSString * _recognitionLanguage;
    NSString * _serializableVoiceName;
    HMSettingLanguageValue * _settingLanguageValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefaultVoiceForRecognitionLanguage, nonatomic, readonly) bool defaultVoiceForRecognitionLanguage;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedOutputVoice;
@property (nonatomic, readonly, copy) NSString *localizedOutputVoiceAccent;
@property (nonatomic, readonly, copy) NSString *localizedOutputVoiceColor;
@property (nonatomic, readonly, copy) NSString *localizedRecognitionLanguage;
@property (nonatomic, readonly) long long outputGender;
@property (nonatomic, readonly, copy) NSString *outputLanguage;
@property (nonatomic, readonly, copy) NSString *recognitionLanguage;
@property (nonatomic, retain) NSString *serializableVoiceName;
@property (nonatomic, retain) HMSettingLanguageValue *settingLanguageValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *voiceName;
@property (nonatomic, readonly) NSString *voiceNameWithDefaultFallback;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)allSerializedRepresentations;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithHomeKitSettingLanguageValue:(id)arg1;
- (id)initWithRecognitionLanguage:(id)arg1 outputLanguage:(id)arg2 outputGender:(long long)arg3 voiceName:(id)arg4 defaultVoiceForRecognitionLanguage:(bool)arg5;
- (id)initWithRecognitionLanguage:(id)arg1 outputVoice:(id)arg2 defaultVoiceForRecognitionLanguage:(bool)arg3;
- (id)initWithSerializedRepresentation:(id)arg1;
- (bool)isDefaultVoiceForRecognitionLanguage;
- (bool)isEqual:(id)arg1;
- (id)localizedOutputVoice;
- (id)localizedOutputVoiceAccent;
- (id)localizedOutputVoiceColor;
- (id)localizedRecognitionLanguage;
- (long long)outputGender;
- (id)outputLanguage;
- (id)outputVoice;
- (id)recognitionLanguage;
- (id)serializableVoiceName;
- (id)serializedRepresentation;
- (void)setSerializableVoiceName:(id)arg1;
- (void)setSettingLanguageValue:(id)arg1;
- (id)settingLanguageValue;
- (id)voiceName;
- (id)voiceNameWithDefaultFallback;

@end
