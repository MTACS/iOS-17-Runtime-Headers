
@interface _INPBLocalizedProject : PBCodable <NSCopying, NSSecureCoding, _INPBLocalizedProject> {
    _INPBAppNames * _appNames;
    struct { }  _has;
    _INPBIntentVocabulary * _intentVocabulary;
    _INPBLanguageTag * _language;
}

@property (nonatomic, retain) _INPBAppNames *appNames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAppNames;
@property (nonatomic, readonly) bool hasIntentVocabulary;
@property (nonatomic, readonly) bool hasLanguage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentVocabulary *intentVocabulary;
@property (nonatomic, retain) _INPBLanguageTag *language;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAppNames;
- (bool)hasIntentVocabulary;
- (bool)hasLanguage;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentVocabulary;
- (bool)isEqual:(id)arg1;
- (id)language;
- (bool)readFrom:(id)arg1;
- (void)setAppNames:(id)arg1;
- (void)setIntentVocabulary:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
