
@interface NPKProtoStandalonePaymentProvisioningFlowHandleIssuerVerificationFieldsRequest : PBRequest <NSCopying> {
    NPKProtoStandaloneRequestHeader * _requestHeader;
    NSMutableArray * _verificationFields;
}

@property (nonatomic, retain) NPKProtoStandaloneRequestHeader *requestHeader;
@property (nonatomic, retain) NSMutableArray *verificationFields;

+ (Class)verificationFieldsType;

- (void).cxx_destruct;
- (void)addVerificationFields:(id)arg1;
- (void)clearVerificationFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestHeader;
- (void)setRequestHeader:(id)arg1;
- (void)setVerificationFields:(id)arg1;
- (id)verificationFields;
- (id)verificationFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)verificationFieldsCount;
- (void)writeTo:(id)arg1;

@end
