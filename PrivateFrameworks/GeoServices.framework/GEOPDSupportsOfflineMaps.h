
@interface GEOPDSupportsOfflineMaps : PBCodable <NSCopying> {
    struct { 
        unsigned int has_offlinePlacecardSuggestion : 1; 
        unsigned int has_supportsOfflineMaps : 1; 
    }  _flags;
    int  _offlinePlacecardSuggestion;
    bool  _supportsOfflineMaps;
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
