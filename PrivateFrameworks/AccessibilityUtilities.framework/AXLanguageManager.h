
@interface AXLanguageManager : NSObject {
    bool  __unitTest_didUpdateForLocaleChange;
    NSCharacterSet * _commonCharacters;
    AXDialectMap * _dialectForCurrentLocale;
    AXDialectMap * _dialectForCurrentRegion;
    AXDialectMap * _dialectForSystemLanguage;
    NSArray * _langMaps;
    NSLocale * _userLocale;
}

@property (nonatomic) bool _unitTest_didUpdateForLocaleChange;
@property (nonatomic, retain) NSCharacterSet *commonCharacters;
@property (nonatomic) AXDialectMap *dialectForCurrentLocale;
@property (nonatomic) AXDialectMap *dialectForCurrentRegion;
@property (nonatomic) AXDialectMap *dialectForSystemLanguage;
@property (nonatomic, readonly) AXDialectMap *dialectForUserLocale;
@property (nonatomic, retain) NSArray *langMaps;
@property (nonatomic, readonly) NSSet *preferredLanguageIDsFromUserSelectedKeyboards;
@property (nonatomic, readonly) NSString *systemLanguageID;
@property (nonatomic, copy) NSLocale *userLocale;

+ (id)commonPunctuationCharacters;
+ (id)dialectForAlternativeVoiceIdentifier:(id)arg1;
+ (id)doNotTranslateWords;
+ (id)nameForAlternativeVoiceIdentifier:(id)arg1;
+ (id)nonlocalizedNameForLanguage:(id)arg1;
+ (id)sharedInstance;
+ (id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg1;
+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg1;
+ (bool)voiceOverSupportedInCurrentLanguage;

- (void).cxx_destruct;
- (void)_addDialectMapsForLanguageCodes:(id)arg1 toResults:(id)arg2;
- (id)_dialectsThatCanSpeak:(id /* block */)arg1 dialectIsSecondary:(id /* block */)arg2 overridePreferredLanguages:(id)arg3 preferOverrides:(bool)arg4;
- (id)_exemplarCharacterSetFromLanguages:(id)arg1;
- (void)_handleUserLocaleDidChange:(id)arg1;
- (id)_loadLangMaps;
- (id)_preferredOverrideDialectsThatCanSpeak:(id /* block */)arg1 dialectIsSecondary:(id /* block */)arg2 overridePreferredLanguages:(id)arg3 preferOverrides:(bool)arg4;
- (id)_synthesisProviderDialectMapPerLanguage;
- (id)_systemPreferredDialectThatCanSpeak:(id /* block */)arg1;
- (bool)_unitTest_didUpdateForLocaleChange;
- (id)ambiguousDialectsFromUserKeyboardPreferences;
- (id)basicDescription;
- (id)characterSetForRanges:(id)arg1;
- (id)commonCharacters;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionOfWord:(id)arg1 forLanguage:(id)arg2;
- (id)dialectForCurrentLocale;
- (id)dialectForCurrentRegion;
- (id)dialectForLanguageID:(id)arg1;
- (id)dialectForSystemLanguage;
- (id)dialectForUserLocale;
- (id)dialectThatCanSpeakCharacter:(unsigned short)arg1;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)arg1;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)arg1 overridePreferredLanguages:(id)arg2;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)arg1 overridePreferredLanguages:(id)arg2 allowTransliteration:(bool)arg3;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)arg1 overridePreferredLanguages:(id)arg2 allowTransliteration:(bool)arg3 preferOverrides:(bool)arg4;
- (id)dialectsThatCanSpeakString:(id)arg1;
- (id)dialectsThatCanSpeakString:(id)arg1 overridePreferredLanguages:(id)arg2;
- (bool)didUpdateForLocaleChange;
- (id)init;
- (bool)isCharacterCommon:(unsigned short)arg1;
- (bool)isStringComposedByCommonCharacters:(id)arg1;
- (id)langMaps;
- (id)outputLanguageIdentifierForLanguage:(id)arg1;
- (id)preferredLanguageIDsFromUserSelectedKeyboards;
- (void)setCommonCharacters:(id)arg1;
- (void)setDialectForCurrentLocale:(id)arg1;
- (void)setDialectForCurrentRegion:(id)arg1;
- (void)setDialectForSystemLanguage:(id)arg1;
- (void)setLangMaps:(id)arg1;
- (void)setUserLocale:(id)arg1;
- (void)set_unitTest_didUpdateForLocaleChange:(bool)arg1;
- (id)systemLanguageID;
- (void)updateCachedDialects;
- (id)userLocale;

@end
