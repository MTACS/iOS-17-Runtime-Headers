
@interface GEOPDSearchSpanScore : PBCodable <NSCopying> {
    struct { 
        unsigned int has_score : 1; 
        unsigned int has_intentType : 1; 
    }  _flags;
    int  _intentType;
    double  _score;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
