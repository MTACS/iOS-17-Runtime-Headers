
@interface PKTextInputLanguageSelectionController : NSObject <PKTextInputLanguageSelectionTokenStore> {
    NSArray * __cachedLanguageIdentifiers;
    NSArray * __cachedLanguageIdentifiersForEmojiAlternatives;
    UIMenu * _cachedLanguageMenu;
    NSTimer * _iconDisplayTimer;
    NSHashTable * _languageSelectionControllerObservers;
    NSMutableDictionary * _observers;
}

@property (nonatomic, copy) NSArray *_cachedLanguageIdentifiers;
@property (nonatomic, copy) NSArray *_cachedLanguageIdentifiersForEmojiAlternatives;
@property (nonatomic, readonly, copy) NSArray *currentLanguageIdentifiers;
@property (nonatomic, readonly, copy) NSArray *currentLanguageIdentifiersForEmojiAlternatives;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *languageIdentificationIcon;
@property (nonatomic, readonly) UIMenu *languageSelectionMenu;
@property (readonly) Class superclass;

+ (id)_currentLanguageIdentifiersForEmojiAlternatives;
+ (void)_enumerateSupportedAndEnabledLocaleIdentifiersWithBlock:(id /* block */)arg1;
+ (id)_filterEnglishWithLanguages:(id)arg1 outRemapTarget:(id*)arg2;
+ (void)_getNormalizedLanguageIdentifier:(id*)arg1 dedupLanguageKey:(id*)arg2 forInputMode:(id)arg3;
+ (void)_getNormalizedLanguageIdentifier:(id*)arg1 dedupLanguageKey:(id*)arg2 forInputMode:(id)arg3 mappingYueToZh:(bool)arg4;
+ (void)_getNormalizedLanguageIdentifier:(id*)arg1 dedupLanguageKey:(id*)arg2 forInputModeIdentifier:(id)arg3;
+ (void)_getNormalizedLanguageIdentifier:(id*)arg1 dedupLanguageKey:(id*)arg2 forInputModeIdentifier:(id)arg3 mappingYueToZh:(bool)arg4;
+ (id)_inputModesForTesting;
+ (void)_performOperations:(id /* block */)arg1 withActiveInputModeIdentifiers:(id)arg2 preferencesLanguages:(id)arg3 preferredLanguages:(id)arg4;
+ (void)_performOperations:(id /* block */)arg1 withActiveInputModes:(id)arg2 preferencesLanguages:(id)arg3 preferredLanguages:(id)arg4;
+ (id)_preferencesLanguagesForTesting;
+ (id)_preferredLanguagesForTesting;
+ (id)_preferredRecognitionLocaleIdentifierFromIdentifiers:(id)arg1;
+ (id)_sortedStringsArray:(id)arg1 withArray:(id)arg2;
+ (id)activeInputModes;
+ (id)filteredEnabledLocaleIdentifiers;
+ (bool)hasSomeSupportedAndEnabledLocale;
+ (void)set_inputModesForTesting:(id)arg1;
+ (void)set_preferencesLanguagesForTesting:(id)arg1;
+ (void)set_preferredLanguagesForTesting:(id)arg1;
+ (id)sharedInstance;
+ (id)supportedAndEnabledLocaleIdentifiers;

- (void).cxx_destruct;
- (id)_cachedLanguageIdentifiers;
- (id)_cachedLanguageIdentifiersForEmojiAlternatives;
- (void)_clearCachesAndUpdateIconObservers;
- (id)_currentKeyboardIdentifier;
- (id)_enabledLanguagesByPreference;
- (void)_handleKeyboardCurrentInputModeChanged:(id)arg1;
- (void)_handleKeyboardPreferencesChanged:(id)arg1;
- (id)_iconForLanguageIdentifier:(id)arg1;
- (void)_notifyLanguageSelectionDidChange;
- (void)_pencilPreferencesChangedCallback:(id)arg1;
- (void)_switchToLanguageIfSupported:(id)arg1;
- (void)_updateLanguageMenuIfNecessary;
- (void)_updateSelectedLanguageInCachedMenu;
- (void)_updateWithLanguageIdentifiers:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)currentLanguageIdentifiers;
- (id)currentLanguageIdentifiersForEmojiAlternatives;
- (void)dealloc;
- (void)ensureKeyboardLanguageConsistencyIfNeeded;
- (id)init;
- (id)languageIdentificationIcon;
- (id)languageSelectionMenu;
- (void)notifyLanguageDidChange;
- (id)registerObserver:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)set_cachedLanguageIdentifiers:(id)arg1;
- (void)set_cachedLanguageIdentifiersForEmojiAlternatives:(id)arg1;
- (bool)shouldIdentifyLanguages;

@end
