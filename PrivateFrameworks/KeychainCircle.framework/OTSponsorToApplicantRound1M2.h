
@interface OTSponsorToApplicantRound1M2 : PBCodable <NSCopying> {
    unsigned long long  _epoch;
    struct { 
        unsigned int epoch : 1; 
    }  _has;
}

@property (nonatomic) unsigned long long epoch;
@property (nonatomic) bool hasEpoch;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)epoch;
- (bool)hasEpoch;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEpoch:(unsigned long long)arg1;
- (void)setHasEpoch:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
