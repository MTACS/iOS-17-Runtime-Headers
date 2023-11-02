
@interface OTSecureElementPeerIdentity : PBCodable <NSCopying> {
    NSData * _peerData;
    NSData * _peerIdentifier;
}

@property (nonatomic, readonly) bool hasPeerData;
@property (nonatomic, readonly) bool hasPeerIdentifier;
@property (nonatomic, retain) NSData *peerData;
@property (nonatomic, retain) NSData *peerIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPeerData;
- (bool)hasPeerIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerData;
- (id)peerIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setPeerData:(id)arg1;
- (void)setPeerIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
