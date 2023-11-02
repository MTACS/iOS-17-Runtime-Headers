
@interface NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext : PBCodable <NSCopying> {
    NPKProtoStandalonePaymentPass * _paymentPass;
    NSMutableArray * _verificationChannels;
}

@property (nonatomic, readonly) bool hasPaymentPass;
@property (nonatomic, retain) NPKProtoStandalonePaymentPass *paymentPass;
@property (nonatomic, retain) NSMutableArray *verificationChannels;

+ (Class)verificationChannelsType;

- (void).cxx_destruct;
- (void)addVerificationChannels:(id)arg1;
- (void)clearVerificationChannels;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPaymentPass;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentPass;
- (bool)readFrom:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setVerificationChannels:(id)arg1;
- (id)verificationChannels;
- (id)verificationChannelsAtIndex:(unsigned long long)arg1;
- (unsigned long long)verificationChannelsCount;
- (void)writeTo:(id)arg1;

@end
