
@interface GEOTFCompactPredictedSpeed : PBCodable <NSCopying> {
    unsigned int  _deltaMinutesInFuture;
    struct { 
        unsigned int has_deltaMinutesInFuture : 1; 
        unsigned int has_speedKph : 1; 
    }  _flags;
    unsigned int  _speedKph;
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
