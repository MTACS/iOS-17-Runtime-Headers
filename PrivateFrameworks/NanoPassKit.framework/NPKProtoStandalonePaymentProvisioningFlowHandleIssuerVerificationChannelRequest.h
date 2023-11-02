
@interface NPKProtoStandalonePaymentProvisioningFlowHandleIssuerVerificationChannelRequest : PBRequest <NSCopying> {
    NPKProtoStandaloneRequestHeader * _requestHeader;
    NSString * _selectedVerificationChannelIdentifier;
}

@property (nonatomic, readonly) bool hasSelectedVerificationChannelIdentifier;
@property (nonatomic, retain) NPKProtoStandaloneRequestHeader *requestHeader;
@property (nonatomic, retain) NSString *selectedVerificationChannelIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSelectedVerificationChannelIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestHeader;
- (id)selectedVerificationChannelIdentifier;
- (void)setRequestHeader:(id)arg1;
- (void)setSelectedVerificationChannelIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
