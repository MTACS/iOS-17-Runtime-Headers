
@interface HPSSiriLanguageValue : NSObject <NSCopying, NSSecureCoding> {
    long long  _gender;
    bool  _languageDefault;
    NSString * _outputLanguage;
    NSString * _recognitionLanguage;
    NSString * _voiceName;
}

@property (nonatomic, readonly) long long gender;
@property (getter=isDefault, nonatomic, readonly) bool languageDefault;
@property (nonatomic, readonly, copy) NSString *outputLanguage;
@property (nonatomic, readonly, copy) NSString *recognitionLanguage;
@property (nonatomic, readonly, copy) NSString *voiceName;

+ (id)languageDefaultWithRecognitionLanguage:(id)arg1 outputLanguage:(id)arg2 gender:(long long)arg3 voiceName:(id)arg4;
+ (id)languagesFromVoices:(id)arg1 forLanguage:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)alignsWithVoice:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)gender;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecognitionLanguage:(id)arg1 outputLanguage:(id)arg2 gender:(long long)arg3 voiceName:(id)arg4;
- (bool)isDefault;
- (bool)isEqual:(id)arg1;
- (id)outputLanguage;
- (id)recognitionLanguage;
- (id)voiceName;

@end
