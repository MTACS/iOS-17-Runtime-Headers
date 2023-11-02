
@interface GEOPDSearchBrandRelationship : PBCodable <NSCopying> {
    unsigned long long  _expandedParentMuid;
    struct { 
        unsigned int has_expandedParentMuid : 1; 
        unsigned int has_muid : 1; 
        unsigned int has_parentMuid : 1; 
    }  _flags;
    unsigned long long  _muid;
    unsigned long long  _parentMuid;
    NSString * _relationshipType;
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
