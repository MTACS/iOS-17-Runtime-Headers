
@interface GEOPDSearchBrandDensity : PBCodable <NSCopying> {
    unsigned long long  _count;
    struct { 
        unsigned int has_count : 1; 
        unsigned int has_popularitySum : 1; 
    }  _flags;
    NSString * _geohash;
    float  _popularitySum;
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
