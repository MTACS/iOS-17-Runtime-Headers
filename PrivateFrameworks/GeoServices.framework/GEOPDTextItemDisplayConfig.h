
@interface GEOPDTextItemDisplayConfig : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maxItemsPerRow : 1; 
        unsigned int has_maxRowCount : 1; 
    }  _flags;
    unsigned int  _maxItemsPerRow;
    unsigned int  _maxRowCount;
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
