
@interface CSLanguageDetectorOption : NSObject {
    NSArray * _conversationalMessages;
    NSString * _currentKeyboard;
    NSDictionary * _dictationLanguagePriors;
    NSSet * _dictationLanguages;
    NSString * _globalLastKeyboardUsed;
    NSDictionary * _keyboardConvoLanguagePriors;
    NSDictionary * _keyboardGlobalLanguagePriors;
    NSArray * _multilingualKeyboardLanguages;
    NSString * _previousMessageLanguage;
    float  _samplingRate;
    bool  _wasLanguageToggled;
}

@property (nonatomic, retain) NSArray *conversationalMessages;
@property (nonatomic, retain) NSString *currentKeyboard;
@property (nonatomic, retain) NSDictionary *dictationLanguagePriors;
@property (nonatomic, retain) NSSet *dictationLanguages;
@property (nonatomic, retain) NSString *globalLastKeyboardUsed;
@property (nonatomic, retain) NSDictionary *keyboardConvoLanguagePriors;
@property (nonatomic, retain) NSDictionary *keyboardGlobalLanguagePriors;
@property (nonatomic, retain) NSArray *multilingualKeyboardLanguages;
@property (nonatomic, retain) NSString *previousMessageLanguage;
@property (nonatomic) float samplingRate;
@property (nonatomic) bool wasLanguageToggled;

- (void).cxx_destruct;
- (id)conversationalMessages;
- (id)currentKeyboard;
- (id)dictationLanguagePriors;
- (id)dictationLanguages;
- (id)globalLastKeyboardUsed;
- (id)keyboardConvoLanguagePriors;
- (id)keyboardGlobalLanguagePriors;
- (id)languageDetectorRequestContext;
- (id)multilingualKeyboardLanguages;
- (id)previousMessageLanguage;
- (float)samplingRate;
- (void)setConversationalMessages:(id)arg1;
- (void)setCurrentKeyboard:(id)arg1;
- (void)setDictationLanguagePriors:(id)arg1;
- (void)setDictationLanguages:(id)arg1;
- (void)setGlobalLastKeyboardUsed:(id)arg1;
- (void)setKeyboardConvoLanguagePriors:(id)arg1;
- (void)setKeyboardGlobalLanguagePriors:(id)arg1;
- (void)setMultilingualKeyboardLanguages:(id)arg1;
- (void)setPreviousMessageLanguage:(id)arg1;
- (void)setSamplingRate:(float)arg1;
- (void)setWasLanguageToggled:(bool)arg1;
- (bool)wasLanguageToggled;

@end
