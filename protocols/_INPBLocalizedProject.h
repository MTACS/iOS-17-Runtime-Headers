
@protocol _INPBLocalizedProject <NSObject>

@required

- (_INPBAppNames *)appNames;
- (bool)hasAppNames;
- (bool)hasIntentVocabulary;
- (bool)hasLanguage;
- (_INPBIntentVocabulary *)intentVocabulary;
- (_INPBLanguageTag *)language;
- (void)setAppNames:(_INPBAppNames *)arg1;
- (void)setIntentVocabulary:(_INPBIntentVocabulary *)arg1;
- (void)setLanguage:(_INPBLanguageTag *)arg1;

@end
