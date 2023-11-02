
@interface AXSSDialectMap : NSObject {
    AXSSLanguageMap * _languageMap;
    NSLocale * _locale;
    NSCharacterSet * _secondaryLanguageRange;
    NSCharacterSet * _speakableCharacters;
    NSString * _specificLanguageID;
    NSString * _voiceIdentifier;
    NSString * _voiceName;
}

@property (nonatomic, readonly) AXSSLanguageMap *languageMap;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, readonly, copy) NSString *regionID;
@property (nonatomic, retain) NSCharacterSet *secondaryLanguageRange;
@property (nonatomic, copy) NSCharacterSet *speakableCharacters;
@property (nonatomic, copy) NSString *specificLanguageID;
@property (nonatomic, copy) NSString *voiceIdentifier;
@property (nonatomic, copy) NSString *voiceName;

- (void).cxx_destruct;
- (bool)canSpeakCharacter:(unsigned short)arg1;
- (bool)canSpeakString:(id)arg1;
- (id)description;
- (id)initWithLocale:(id)arg1 voiceName:(id)arg2 specificLanguageID:(id)arg3 voiceIdentifier:(id)arg4 speakableCharacters:(id)arg5 secondaryLanguageRange:(id)arg6;
- (bool)isDialectSecondaryForCharacter:(unsigned short)arg1;
- (bool)isEqual:(id)arg1;
- (id)languageMap;
- (id)locale;
- (id)regionID;
- (id)secondaryLanguageRange;
- (void)setLocale:(id)arg1;
- (void)setSecondaryLanguageRange:(id)arg1;
- (void)setSpeakableCharacters:(id)arg1;
- (void)setSpecificLanguageID:(id)arg1;
- (void)setVoiceIdentifier:(id)arg1;
- (void)setVoiceName:(id)arg1;
- (id)speakableCharacters;
- (id)specificLanguageID;
- (id)voiceIdentifier;
- (id)voiceName;

@end
