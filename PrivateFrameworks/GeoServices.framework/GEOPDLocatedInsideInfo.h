
@interface GEOPDLocatedInsideInfo : PBCodable <NSCopying> {
    int  _featureType;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int has_featureType : 1; 
    }  _flags;
    unsigned long long  _muid;
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
