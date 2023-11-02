
@interface GEOPDAutocompleteEntryBrandProfile : PBCodable <NSCopying> {
    NSString * _brandId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *brandId;
@property (nonatomic, readonly) bool hasBrandId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)brandId;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBrandId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBrandId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
