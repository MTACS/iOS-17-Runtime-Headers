
@interface NPKProtoSetPeerPaymentPreferencesRequest : PBRequest <NSCopying> {
    NSData * _peerPaymentPreferencesData;
}

@property (nonatomic, readonly) bool hasPeerPaymentPreferencesData;
@property (nonatomic, retain) NSData *peerPaymentPreferencesData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPeerPaymentPreferencesData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerPaymentPreferencesData;
- (bool)readFrom:(id)arg1;
- (void)setPeerPaymentPreferencesData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
