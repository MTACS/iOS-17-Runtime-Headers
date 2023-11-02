
@interface NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext : PBCodable <NSCopying> {
    bool  _allowsAddingDifferentCard;
    NPKProtoStandalonePaymentCredentialUnion * _credential;
    struct { 
        unsigned int allowsAddingDifferentCard : 1; 
    }  _has;
    NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext * _manualEntryStepContext;
    NPKProtoStandalonePaymentRemoteCredential * _remoteCredential;
}

@property (nonatomic) bool allowsAddingDifferentCard;
@property (nonatomic, retain) NPKProtoStandalonePaymentCredentialUnion *credential;
@property (nonatomic) bool hasAllowsAddingDifferentCard;
@property (nonatomic, readonly) bool hasCredential;
@property (nonatomic, readonly) bool hasRemoteCredential;
@property (nonatomic, retain) NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *manualEntryStepContext;
@property (nonatomic, retain) NPKProtoStandalonePaymentRemoteCredential *remoteCredential;

- (void).cxx_destruct;
- (bool)allowsAddingDifferentCard;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credential;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAllowsAddingDifferentCard;
- (bool)hasCredential;
- (bool)hasRemoteCredential;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)manualEntryStepContext;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)remoteCredential;
- (void)setAllowsAddingDifferentCard:(bool)arg1;
- (void)setCredential:(id)arg1;
- (void)setHasAllowsAddingDifferentCard:(bool)arg1;
- (void)setManualEntryStepContext:(id)arg1;
- (void)setRemoteCredential:(id)arg1;
- (void)writeTo:(id)arg1;

@end
