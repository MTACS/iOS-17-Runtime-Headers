
@interface TPVoucher : NSObject {
    NSString * _beneficiaryID;
    NSData * _data;
    unsigned long long  _reason;
    NSData * _sig;
    NSString * _sponsorID;
}

@property (nonatomic, retain) NSString *beneficiaryID;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) unsigned long long reason;
@property (nonatomic, retain) NSData *sig;
@property (nonatomic, retain) NSString *sponsorID;

+ (id)voucherInfoWithData:(id)arg1 sig:(id)arg2;
+ (id)voucherWithReason:(unsigned long long)arg1 beneficiaryID:(id)arg2 sponsorID:(id)arg3 signingKeyPair:(id)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (id)beneficiaryID;
- (bool)checkSignatureWithKey:(id)arg1;
- (id)createRecoveryECPublicKey:(id)arg1;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithObj:(id)arg1 data:(id)arg2 sig:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVoucher:(id)arg1;
- (unsigned long long)reason;
- (void)setBeneficiaryID:(id)arg1;
- (void)setData:(id)arg1;
- (void)setReason:(unsigned long long)arg1;
- (void)setSig:(id)arg1;
- (void)setSponsorID:(id)arg1;
- (id)sig;
- (id)sponsorID;

@end
