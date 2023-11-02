
@interface GEOLanguage : PBCodable <NSCopying> {
    unsigned int  _identifier;
    NSMutableArray * _languages;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int identifier;
@property (nonatomic, retain) NSMutableArray *languages;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)languageType;

- (void).cxx_destruct;
- (void)addLanguage:(id)arg1;
- (void)clearLanguages;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)languageAtIndex:(unsigned long long)arg1;
- (id)languages;
- (unsigned long long)languagesCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setLanguages:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
