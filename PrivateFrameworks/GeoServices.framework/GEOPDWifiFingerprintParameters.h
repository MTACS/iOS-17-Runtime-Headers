
@interface GEOPDWifiFingerprintParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maxLabels : 1; 
    }  _flags;
    unsigned int  _maxLabels;
    NSMutableArray * _measurements;
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
