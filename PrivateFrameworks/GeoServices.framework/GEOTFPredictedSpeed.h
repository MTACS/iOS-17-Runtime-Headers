
@interface GEOTFPredictedSpeed : PBCodable <NSCopying> {
    unsigned int  _deltaMinutesInFuture;
    struct { 
        unsigned int has_deltaMinutesInFuture : 1; 
        unsigned int has_speed : 1; 
    }  _flags;
    unsigned int  _speed;
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
