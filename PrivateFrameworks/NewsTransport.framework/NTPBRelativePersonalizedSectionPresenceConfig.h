
@interface NTPBRelativePersonalizedSectionPresenceConfig : PBCodable <NSCopying> {
    struct { 
        unsigned int scalar : 1; 
    }  _has;
    double  _scalar;
}

@property (nonatomic) bool hasScalar;
@property (nonatomic) double scalar;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasScalar;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)scalar;
- (void)setHasScalar:(bool)arg1;
- (void)setScalar:(double)arg1;
- (void)writeTo:(id)arg1;

@end
