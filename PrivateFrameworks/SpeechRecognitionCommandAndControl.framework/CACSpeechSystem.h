
@interface CACSpeechSystem : NSObject {
    struct __CFLocale { } * _currentLocaleRef;
    struct __RXVocabulary { } * _currentRXVocabularyRef;
    NSString * _recognitionLocaleIdentifier;
    struct __RXRecognitionSystem { } * _recognitionSystemRef;
    NSTimer * _setAdditionalContextStringsDelayTimer;
    NSTimer * _setLeadingContextStringDelayTimer;
    bool  _supportsSpellingMode;
}

@property (readonly) NSString *recognitionLocaleIdentifier;
@property (readonly) bool supportsSpellingMode;

+ (void)closeSpeechSystem;
+ (void)initialize;
+ (bool)isSpeechSystemServerRunning;
+ (void)recognizeString:(id)arg1;
+ (id)rxContextDictionaryForLanguageModel:(id)arg1;
+ (id)speechSystem;
+ (void)startPreventingDisplayDimming;
+ (void)stopPreventingDisplayDimming;
+ (id)valueFromRXContextKey:(id)arg1 rxLanguageObject:(struct __RXLanguageObject { }*)arg2;

- (void).cxx_destruct;
- (void)_close;
- (struct __RXLanguageObject { }*)createRXLanguageObjectRefFromCACLanguageModel:(id)arg1;
- (struct __RXLanguageObject { }*)createRXLanguageObjectRefFromCACLanguageModel:(id)arg1 ignoreBuiltInLMTable:(bool)arg2;
- (struct __CFLocale { }*)currentLocaleRef;
- (struct __RXVocabulary { }*)currentRXVocabularyRef;
- (id)initLocaleIdentifer:(id)arg1 microphoneIdentifier:(id)arg2;
- (id)recognitionLocaleIdentifier;
- (struct __RXRecognitionSystem { }*)recognitionSystemRef;
- (id)resultLanguageModelFromRXLanguageObject:(struct __RXLanguageObject { }*)arg1;
- (void)rxRecognitionSystemReset;
- (void)setAdditionalContextStrings:(id)arg1;
- (void)setLeadingContextString:(id)arg1;
- (void)setRxRecognitionSystemResetMode:(int)arg1;
- (bool)supportsSpellingMode;

@end
