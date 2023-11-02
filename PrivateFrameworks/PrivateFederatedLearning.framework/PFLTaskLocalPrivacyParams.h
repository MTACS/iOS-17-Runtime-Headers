
@interface PFLTaskLocalPrivacyParams : PBCodable <NSCopying> {
    double  _clippingNormMax;
    struct { 
        unsigned int clippingNormMax : 1; 
        unsigned int normBinCount : 1; 
    }  _has;
    long long  _normBinCount;
}

@property (nonatomic) double clippingNormMax;
@property (nonatomic) bool hasClippingNormMax;
@property (nonatomic) bool hasNormBinCount;
@property (nonatomic) long long normBinCount;

- (double)clippingNormMax;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClippingNormMax;
- (bool)hasNormBinCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)normBinCount;
- (bool)readFrom:(id)arg1;
- (void)setClippingNormMax:(double)arg1;
- (void)setHasClippingNormMax:(bool)arg1;
- (void)setHasNormBinCount:(bool)arg1;
- (void)setNormBinCount:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
