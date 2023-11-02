
@interface TIInputModeController : NSObject {
    NSArray * _supportedInputModeIdentifiers;
    NSArray * _supportedInputModeLanguageAndRegions;
    NSString * currentLocale;
    NSArray * defaultInputModes;
    NSArray * enabledInputModes;
    NSArray * inputModesForTesting;
    NSArray * preferredLanguages;
}

@property (nonatomic, copy) NSString *currentLocale;
@property (nonatomic, copy) NSArray *defaultInputModes;
@property (readonly) NSArray *enabledInputModeIdentifiers;
@property (nonatomic, copy) NSArray *enabledInputModes;
@property (nonatomic, copy) NSArray *inputModesForTesting;
@property (nonatomic, copy) NSArray *preferredLanguages;
@property (readonly) NSArray *supportedInputModeIdentifiers;
@property (readonly) NSArray *supportedInputModeLanguageAndRegions;

+ (id)_inputModesForLocale:(id)arg1 language:(id)arg2 modeFetcher:(id /* block */)arg3;
+ (id)sharedInputModeController;

- (void).cxx_destruct;
- (id)currentLocale;
- (id)defaultDictationLanguagesForKeyboardLanguage:(id)arg1;
- (id)defaultEnabledInputModesForCurrentLocale;
- (id)defaultInputModes;
- (id)enabledInputModeIdentifiers;
- (id)enabledInputModes;
- (bool)identifierIsValidSystemInputMode:(id)arg1;
- (id)inputModesForTesting;
- (id)preferredLanguages;
- (void)setCurrentLocale:(id)arg1;
- (void)setDefaultInputModes:(id)arg1;
- (void)setEnabledInputModes:(id)arg1;
- (void)setInputModeIdentifiersForTesting:(id)arg1;
- (void)setInputModesForTesting:(id)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (id)suggestedDictationLanguageForDeviceLanguage;
- (id)suggestedDictationLanguagesForDeviceLanguage;
- (id)supportedInputModeIdentifiers;
- (id)supportedInputModeLanguageAndRegions;

@end
