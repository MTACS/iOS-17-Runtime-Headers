
@interface GEOPDResultRefinementRangeDiscrete : PBCodable <NSCopying> {
    NSMutableArray * _elements;
    struct { 
        unsigned int has_selectedMaxElementIndex : 1; 
        unsigned int has_selectedMinElementIndex : 1; 
    }  _flags;
    unsigned int  _selectedMaxElementIndex;
    unsigned int  _selectedMinElementIndex;
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
