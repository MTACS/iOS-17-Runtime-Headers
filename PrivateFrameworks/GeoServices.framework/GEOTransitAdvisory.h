
@interface GEOTransitAdvisory : PBCodable <NSCopying> {
    GEOFormattedString * _text;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasText;
@property (nonatomic, retain) GEOFormattedString *text;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasText;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
