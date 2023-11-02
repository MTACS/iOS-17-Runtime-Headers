
@interface GEOPDMerchantLookupResult : PBCodable <NSCopying> {
    GEOPDCategoryInformation * _categoryInfo;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDCategoryInformation *categoryInfo;
@property (nonatomic, readonly) bool hasCategoryInfo;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)categoryInfo;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategoryInfo;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategoryInfo:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
