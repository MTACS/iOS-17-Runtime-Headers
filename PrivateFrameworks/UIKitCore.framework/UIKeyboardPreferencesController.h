
@interface UIKeyboardPreferencesController : NSObject

@property long long compactAssistantBarPersistentLocation;
@property bool enableProKeyboard;
@property long long handBias;
@property (nonatomic, readonly) UIKeyboardPreferencesController<TIPreferencesControllerActions> *preferencesActions;
@property long long visceral;

+ (id)sharedPreferencesController;

- (void)_configurePreferences;
- (bool)allEnabledInputModesAreValid;
- (bool)boolForKey:(int)arg1;
- (bool)boolForPreferenceKey:(id)arg1;
- (long long)compactAssistantBarPersistentLocation;
- (bool)crescendoEnabled;
- (bool)currentInputModeSupportsCrescendo;
- (void)dealloc;
- (bool)defaultGlobeAsEmojiKeySetting;
- (bool)enableProKeyboard;
- (void)forwardInvocation:(id)arg1;
- (long long)handBias;
- (id)init;
- (bool)inputModeSupportsCrescendo:(id)arg1;
- (id)inputModeUpdateTime;
- (bool)isFirstReachableKeyboardInteraction;
- (bool)isPasswordAutoFillAllowed;
- (bool)isPreferenceKeyLockedDown:(id)arg1;
- (bool)keyboardLanguageIndicatorEnabled;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)performedFirstReachableKeyboardInteraction;
- (id)preferencesActions;
- (void)preferencesControllerChanged:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (double)rivenSizeFactor:(double)arg1;
- (void)saveInputModes:(id)arg1;
- (void)setCompactAssistantBarPersistentLocation:(long long)arg1;
- (void)setDictationAutoPunctuation:(bool)arg1;
- (void)setEnableProKeyboard:(bool)arg1;
- (void)setEnabledDictationLanguages:(id)arg1;
- (void)setHandBias:(long long)arg1;
- (void)setLanguageAwareInputModeLastUsed:(id)arg1;
- (void)setLastUsedDictationLanguages:(id)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setVisceral:(long long)arg1;
- (bool)spaceConfirmationEnabled;
- (void)synchronizePreferences;
- (void)touchSynchronizePreferencesTimer;
- (bool)useHardwareGlobeKeyAsEmojiKey;
- (id)valueForKey:(int)arg1;
- (id)valueForPreferenceKey:(id)arg1;
- (long long)visceral;

@end
