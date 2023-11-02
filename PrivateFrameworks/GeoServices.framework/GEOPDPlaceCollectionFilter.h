
@interface GEOPDPlaceCollectionFilter : PBCodable <NSCopying> {
    bool  _enableCollectionItemDescription;
    bool  _enableMediaLink;
    unsigned int  _expectedResultCount;
    struct { 
        unsigned int has_expectedResultCount : 1; 
        unsigned int has_enableCollectionItemDescription : 1; 
        unsigned int has_enableMediaLink : 1; 
        unsigned int has_isCollectionView : 1; 
        unsigned int has_overrideSuppress : 1; 
        unsigned int has_partiallyClientize : 1; 
    }  _flags;
    bool  _isCollectionView;
    bool  _overrideSuppress;
    bool  _partiallyClientize;
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
