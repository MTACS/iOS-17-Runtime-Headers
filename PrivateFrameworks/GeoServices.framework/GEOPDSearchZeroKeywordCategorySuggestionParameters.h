
@interface GEOPDSearchZeroKeywordCategorySuggestionParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int has_requestLocalTimestamp : 1; 
        unsigned int has_maxNumCategoriesPerEntry : 1; 
        unsigned int has_userPreferredTransportType : 1; 
        unsigned int has_shouldMatchNoQueryStateSuggestions : 1; 
    }  _flags;
    unsigned int  _maxNumCategoriesPerEntry;
    double  _requestLocalTimestamp;
    bool  _shouldMatchNoQueryStateSuggestions;
    GEOLatLng * _significantLocation;
    PBUnknownFields * _unknownFields;
    int  _userPreferredTransportType;
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
