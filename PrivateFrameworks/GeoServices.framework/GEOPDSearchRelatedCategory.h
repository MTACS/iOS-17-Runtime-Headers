
@interface GEOPDSearchRelatedCategory : PBCodable <NSCopying> {
    long long  _densityScore;
    NSString * _entityId;
    struct { 
        unsigned int has_densityScore : 1; 
        unsigned int has_type : 1; 
    }  _flags;
    int  _type;
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
