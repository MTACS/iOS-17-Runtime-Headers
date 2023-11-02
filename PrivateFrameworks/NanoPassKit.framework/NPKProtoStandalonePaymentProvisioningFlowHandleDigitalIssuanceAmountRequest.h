
@interface NPKProtoStandalonePaymentProvisioningFlowHandleDigitalIssuanceAmountRequest : PBRequest <NSCopying> {
    NSString * _amount;
    NPKProtoStandaloneRequestHeader * _requestHeader;
}

@property (nonatomic, retain) NSString *amount;
@property (nonatomic, readonly) bool hasAmount;
@property (nonatomic, retain) NPKProtoStandaloneRequestHeader *requestHeader;

- (void).cxx_destruct;
- (id)amount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAmount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestHeader;
- (void)setAmount:(id)arg1;
- (void)setRequestHeader:(id)arg1;
- (void)writeTo:(id)arg1;

@end
