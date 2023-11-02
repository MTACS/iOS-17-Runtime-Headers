
@interface GEOPDResolvedItem : PBCodable <NSCopying> {
    NSString * _extractedTerm;
    struct { 
        unsigned int has_resolvedItemType : 1; 
        unsigned int has_resultIndex : 1; 
    }  _flags;
    int  _resolvedItemType;
    unsigned int  _resultIndex;
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
