
@interface AXSSLanguageManager : NSObject {
    NSCharacterSet * _commonCharacters;
    AXSSDialectMap * _dialectForCurrentLocale;
    AXSSDialectMap * _dialectForCurrentRegion;
    AXSSDialectMap * _dialectForSystemLanguage;
    NSArray * _languageMaps;
    NSLocale * _userLocale;
}

@property (nonatomic, retain) NSCharacterSet *commonCharacters;
@property (nonatomic, retain) AXSSDialectMap *dialectForCurrentLocale;
@property (nonatomic, retain) AXSSDialectMap *dialectForCurrentRegion;
@property (nonatomic, retain) AXSSDialectMap *dialectForSystemLanguage;
@property (nonatomic, readonly) AXSSDialectMap *dialectForUserLocale;
@property (nonatomic, retain) NSArray *languageMaps;
@property (nonatomic, readonly) NSString *systemLanguageID;
@property (nonatomic, copy) NSLocale *userLocale;

+ (id)commonPunctuationCharacters;
+ (id)shared;
+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg1;

- (void).cxx_destruct;
- (void)_handleUserLocaleDidChange:(id)arg1;
- (id)_preferredLanguage;
- (id)commonCharacters;
- (id)description;
- (id)dialectForCurrentLocale;
- (id)dialectForCurrentRegion;
- (id)dialectForLanguageID:(id)arg1;
- (id)dialectForSpeechSynthesisVoiceID:(id)arg1;
- (id)dialectForSystemLanguage;
- (id)dialectForUserLocale;
- (id)dialectThatCanSpeakCharacter:(unsigned short)arg1;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)arg1;
- (id)dialectsThatCanSpeakString:(id)arg1;
- (id)init;
- (bool)isCharacterCommon:(unsigned short)arg1;
- (bool)isStringComposedByCommonCharacters:(id)arg1;
- (id)languageMaps;
- (void)setCommonCharacters:(id)arg1;
- (void)setDialectForCurrentLocale:(id)arg1;
- (void)setDialectForCurrentRegion:(id)arg1;
- (void)setDialectForSystemLanguage:(id)arg1;
- (void)setLanguageMaps:(id)arg1;
- (void)setUserLocale:(id)arg1;
- (id)systemLanguageID;
- (void)updateCachedDialects;
- (id)userLocale;

@end
