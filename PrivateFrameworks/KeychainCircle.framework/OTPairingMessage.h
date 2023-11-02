
@interface OTPairingMessage : PBCodable <NSCopying> {
    OTSponsorToApplicantRound1M2 * _epoch;
    OTApplicantToSponsorRound2M1 * _prepare;
    OTSupportOctagonMessage * _supportsOctagon;
    OTSupportSOSMessage * _supportsSOS;
    OTSponsorToApplicantRound2M2 * _voucher;
}

@property (nonatomic, retain) OTSponsorToApplicantRound1M2 *epoch;
@property (nonatomic, readonly) bool hasEpoch;
@property (nonatomic, readonly) bool hasPrepare;
@property (nonatomic, readonly) bool hasSupportsOctagon;
@property (nonatomic, readonly) bool hasSupportsSOS;
@property (nonatomic, readonly) bool hasVoucher;
@property (nonatomic, retain) OTApplicantToSponsorRound2M1 *prepare;
@property (nonatomic, retain) OTSupportOctagonMessage *supportsOctagon;
@property (nonatomic, retain) OTSupportSOSMessage *supportsSOS;
@property (nonatomic, retain) OTSponsorToApplicantRound2M2 *voucher;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)epoch;
- (bool)hasEpoch;
- (bool)hasPrepare;
- (bool)hasSupportsOctagon;
- (bool)hasSupportsSOS;
- (bool)hasVoucher;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)prepare;
- (bool)readFrom:(id)arg1;
- (void)setEpoch:(id)arg1;
- (void)setPrepare:(id)arg1;
- (void)setSupportsOctagon:(id)arg1;
- (void)setSupportsSOS:(id)arg1;
- (void)setVoucher:(id)arg1;
- (id)supportsOctagon;
- (id)supportsSOS;
- (id)voucher;
- (void)writeTo:(id)arg1;

@end
