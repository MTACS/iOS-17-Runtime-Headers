
@interface AXDialectMap : NSObject {
    AXLangMap * _langMap;
    NSLocale * _locale;
    NSCharacterSet * _secondaryLanguageRange;
    NSCharacterSet * _speakableCharacters;
    NSString * _specificLanguageID;
    NSString * _voiceName;
}

@property (nonatomic, readonly) AXLanguageManager *langManager;
@property (nonatomic) AXLangMap *langMap;
@property (nonatomic, readonly) NSString *languageNameAndLocaleInCurrentLocale;
@property (nonatomic, readonly) NSString *languageNameAndLocaleInNativeLocale;
@property (nonatomic, readonly) NSString *languageNameInCurrentLocale;
@property (nonatomic, readonly) NSString *languageNameInNativeLocale;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, readonly) NSString *localeNameInCurrentLocale;
@property (nonatomic, readonly) NSString *regionID;
@property (nonatomic, retain) NSCharacterSet *secondaryLanguageRange;
@property (nonatomic, retain) NSCharacterSet *speakableCharacters;
@property (nonatomic, copy) NSString *specificLanguageID;
@property (nonatomic, copy) NSString *voiceName;

+ (id)_hanjaCharacterSet;
+ (id)_hanjaToHangulMap;

- (void).cxx_destruct;
- (bool)_languageIsKorean;
- (id)_stringByTransliterationHanjaToHangul:(id)arg1;
- (id)_transliteratedSpeechCharacters;
- (id)basicDescription;
- (bool)canSpeakCharacter:(unsigned short)arg1;
- (bool)canSpeakCharacter:(unsigned short)arg1 allowTransliteration:(bool)arg2;
- (bool)canSpeakLongCharacter:(unsigned int)arg1;
- (bool)canSpeakString:(id)arg1;
- (bool)canSpeakString:(id)arg1 allowsTransliteration:(bool)arg2;
- (id)debugDescription;
- (id)description;
- (bool)hasSpeakableCharacters;
- (id)initWithLocale:(id)arg1 specificLanguageID:(id)arg2 speakableCharacters:(id)arg3 secondaryLanguageRange:(id)arg4;
- (bool)isDialectSecondaryForCharacter:(unsigned short)arg1;
- (id)langManager;
- (id)langMap;
- (id)languageNameAndLocaleInCurrentLocale;
- (id)languageNameAndLocaleInNativeLocale;
- (id)languageNameInCurrentLocale;
- (id)languageNameInNativeLocale;
- (id)locale;
- (id)localeNameInCurrentLocale;
- (id)regionID;
- (id)secondaryLanguageRange;
- (void)setLangMap:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setSecondaryLanguageRange:(id)arg1;
- (void)setSpeakableCharacters:(id)arg1;
- (void)setSpecificLanguageID:(id)arg1;
- (void)setVoiceName:(id)arg1;
- (id)speakableCharacters;
- (bool)speakingRequiresTransliteration;
- (id)specificLanguageID;
- (id)transliteratedStringForString:(id)arg1;
- (id)voiceName;

@end
