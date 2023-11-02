
@interface GEOPDSInferredValue : PBCodable <NSCopying> {
    GEOPDSRawAttribute * _attribute;
    struct { 
        unsigned int has_priceRange : 1; 
        unsigned int has_tradingHours : 1; 
        unsigned int has_negateInferredValue : 1; 
    }  _flags;
    bool  _negateInferredValue;
    int  _priceRange;
    int  _tradingHours;
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
