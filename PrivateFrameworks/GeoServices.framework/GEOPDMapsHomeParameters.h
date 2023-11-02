
@interface GEOPDMapsHomeParameters : PBCodable <NSCopying> {
    GEOPDCollectionSuggestionParameters * _collectionSuggestionParameters;
    struct { 
        unsigned int has_shouldPopulateExploreGuidesEntry : 1; 
    }  _flags;
    bool  _shouldPopulateExploreGuidesEntry;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
