
@interface TPSKeyboardUtilities : NSObject

+ (id)_variantForInputMode:(id)arg1;
+ (id)enabledDictationLanguages;
+ (bool)hasCustomizedKeyboard;
+ (id)installedInputModes;
+ (bool)isAutoCorrectionEnabled;
+ (bool)isDictationEnabled;
+ (bool)isDictationSelectedForLanguage:(id)arg1;
+ (bool)isExtendedSuggestionSupportedForInputMode:(id)arg1;
+ (bool)isHandwritingEnabledForInputMode:(id)arg1;
+ (bool)isInputModeInstalledForLanguage:(id)arg1;

@end
