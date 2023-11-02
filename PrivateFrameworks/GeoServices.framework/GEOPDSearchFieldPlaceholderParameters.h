
@interface GEOPDSearchFieldPlaceholderParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int has_version : 1; 
        unsigned int has_isEditServerRecommendedStop : 1; 
    }  _flags;
    bool  _isEditServerRecommendedStop;
    PBUnknownFields * _unknownFields;
    int  _version;
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
