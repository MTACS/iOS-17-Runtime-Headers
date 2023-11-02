
@interface NPKProtoStandalonePaymentCredentialUnion : PBCodable <NSCopying> {
    NPKProtoStandaloneCreditAccountCredential * _creditAccountCredential;
    NSString * _flowIdentifier;
    NPKProtoStandalonePaymentRemoteCredential * _remoteCredential;
}

@property (nonatomic, retain) NPKProtoStandaloneCreditAccountCredential *creditAccountCredential;
@property (nonatomic, retain) NSString *flowIdentifier;
@property (nonatomic, readonly) bool hasCreditAccountCredential;
@property (nonatomic, readonly) bool hasFlowIdentifier;
@property (nonatomic, readonly) bool hasRemoteCredential;
@property (nonatomic, retain) NPKProtoStandalonePaymentRemoteCredential *remoteCredential;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creditAccountCredential;
- (id)description;
- (id)dictionaryRepresentation;
- (id)flowIdentifier;
- (bool)hasCreditAccountCredential;
- (bool)hasFlowIdentifier;
- (bool)hasRemoteCredential;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)remoteCredential;
- (void)setCreditAccountCredential:(id)arg1;
- (void)setFlowIdentifier:(id)arg1;
- (void)setRemoteCredential:(id)arg1;
- (void)writeTo:(id)arg1;

@end
