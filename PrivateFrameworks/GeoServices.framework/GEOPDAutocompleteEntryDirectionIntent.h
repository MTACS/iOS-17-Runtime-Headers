
@interface GEOPDAutocompleteEntryDirectionIntent : PBCodable <NSCopying> {
    GEOPDDirectionIntent * _directionIntent;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDDirectionIntent *directionIntent;
@property (nonatomic, readonly) bool hasDirectionIntent;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionIntent;
- (bool)hasDirectionIntent;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDirectionIntent:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
