
@interface GEOPDVariableExponentPair : PBCodable <NSCopying> {
    unsigned int  _exponent;
    struct { 
        unsigned int has_exponent : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
    GEOPDClientRankingFeatureUnit * _variable;
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
