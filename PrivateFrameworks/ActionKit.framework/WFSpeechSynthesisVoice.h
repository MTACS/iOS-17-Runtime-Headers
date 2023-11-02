
@interface WFSpeechSynthesisVoice : NSObject {
    AVSpeechSynthesisVoice * _avVoice;
    NSString * _identifier;
}

@property (nonatomic, retain) AVSpeechSynthesisVoice *avVoice;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isSiriVoice;
@property (nonatomic, readonly, copy) NSString *languageCode;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSString *vsVoiceName;

+ (id)availableLanguageCodes;
+ (id)currentLanguageCode;
+ (id)defaultVoiceForLanguageCode:(id)arg1;
+ (id)voiceForIdentifier:(id)arg1;
+ (id)voiceFromAVVoice:(id)arg1;
+ (id)voicesForLanguageCode:(id)arg1;

- (void).cxx_destruct;
- (id)avVoice;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isSiriVoice;
- (id)languageCode;
- (id)name;
- (void)setAvVoice:(id)arg1;
- (id)vsVoiceName;

@end
