
@interface NPKProtoUpdatePeerPaymentAccountResponse : PBCodable <NSCopying> {
    NSData * _peerPaymentAccountData;
}

@property (nonatomic, readonly) bool hasPeerPaymentAccountData;
@property (nonatomic, retain) NSData *peerPaymentAccountData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPeerPaymentAccountData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerPaymentAccountData;
- (bool)readFrom:(id)arg1;
- (void)setPeerPaymentAccountData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
