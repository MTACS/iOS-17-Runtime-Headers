
@interface NPKProtoStandalonePaymentProvisioningFlowStartIssuerVerificationFlowForPaymentPassRequest : PBRequest <NSCopying> {
    NSString * _passTypeIdentifier;
    NPKProtoStandaloneRequestHeader * _requestHeader;
    NSString * _serialNumber;
}

@property (nonatomic, readonly) bool hasPassTypeIdentifier;
@property (nonatomic, readonly) bool hasSerialNumber;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic, retain) NPKProtoStandaloneRequestHeader *requestHeader;
@property (nonatomic, retain) NSString *serialNumber;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPassTypeIdentifier;
- (bool)hasSerialNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passTypeIdentifier;
- (bool)readFrom:(id)arg1;
- (id)requestHeader;
- (id)serialNumber;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setRequestHeader:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)writeTo:(id)arg1;

@end
