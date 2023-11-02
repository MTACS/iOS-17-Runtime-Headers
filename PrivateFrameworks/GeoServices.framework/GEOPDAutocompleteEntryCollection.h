
@interface GEOPDAutocompleteEntryCollection : PBCodable <NSCopying> {
    GEOPDMapsIdentifier * _collectionId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDMapsIdentifier *collectionId;
@property (nonatomic, readonly) bool hasCollectionId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (id)collectionId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCollectionId;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCollectionId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
