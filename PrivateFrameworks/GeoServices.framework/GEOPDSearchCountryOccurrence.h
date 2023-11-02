
@interface GEOPDSearchCountryOccurrence : PBCodable <NSCopying> {
    NSString * _alpha3CountryCode;
    struct { 
        unsigned int has_occurrence : 1; 
    }  _flags;
    unsigned long long  _occurrence;
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
