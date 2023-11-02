
@interface OTSponsorToApplicantRound2M2 : PBCodable <NSCopying> {
    NSData * _voucher;
    NSData * _voucherSignature;
}

@property (nonatomic, readonly) bool hasVoucher;
@property (nonatomic, readonly) bool hasVoucherSignature;
@property (nonatomic, retain) NSData *voucher;
@property (nonatomic, retain) NSData *voucherSignature;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVoucher;
- (bool)hasVoucherSignature;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setVoucher:(id)arg1;
- (void)setVoucherSignature:(id)arg1;
- (id)voucher;
- (id)voucherSignature;
- (void)writeTo:(id)arg1;

@end
