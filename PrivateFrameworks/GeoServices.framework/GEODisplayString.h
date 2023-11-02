
@interface GEODisplayString : PBCodable <NSCopying> {
    NSMutableArray * _localizedStrings;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *localizedStrings;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)localizedStringsType;

- (void).cxx_destruct;
- (void)addLocalizedStrings:(id)arg1;
- (void)clearLocalizedStrings;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)localizedStrings;
- (id)localizedStringsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedStringsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocalizedStrings:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
