
@interface GEOPDSearchPreferredCategory : PBCodable <NSCopying> {
    NSString * _categoryId;
    struct { 
        unsigned int has_score : 1; 
    }  _flags;
    float  _score;
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
