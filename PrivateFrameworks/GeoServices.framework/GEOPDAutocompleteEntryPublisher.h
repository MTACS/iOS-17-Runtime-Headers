
@interface GEOPDAutocompleteEntryPublisher : PBCodable <NSCopying> {
    GEOPDMapsIdentifier * _publisherId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPublisherId;
@property (nonatomic, retain) GEOPDMapsIdentifier *publisherId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasPublisherId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)publisherId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPublisherId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
