
@interface NPKProtoStandalonePaymentProvisioningFlowHandleIssuerVerificationCodeRequest : PBRequest <NSCopying> {
    NPKProtoStandaloneRequestHeader * _requestHeader;
    NSString * _verificationCode;
}

@property (nonatomic, readonly) bool hasVerificationCode;
@property (nonatomic, retain) NPKProtoStandaloneRequestHeader *requestHeader;
@property (nonatomic, retain) NSString *verificationCode;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVerificationCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestHeader;
- (void)setRequestHeader:(id)arg1;
- (void)setVerificationCode:(id)arg1;
- (id)verificationCode;
- (void)writeTo:(id)arg1;

@end
