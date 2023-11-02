
@interface TPPBVoucher : PBCodable <NSCopying> {
    NSString * _beneficiary;
    struct { 
        unsigned int reason : 1; 
    }  _has;
    int  _reason;
    NSString * _sponsor;
}

@property (nonatomic, retain) NSString *beneficiary;
@property (nonatomic, readonly) bool hasBeneficiary;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) bool hasSponsor;
@property (nonatomic) int reason;
@property (nonatomic, retain) NSString *sponsor;

- (void).cxx_destruct;
- (int)StringAsReason:(id)arg1;
- (id)beneficiary;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBeneficiary;
- (bool)hasReason;
- (bool)hasSponsor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (void)setBeneficiary:(id)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setSponsor:(id)arg1;
- (id)sponsor;
- (void)writeTo:(id)arg1;

@end
