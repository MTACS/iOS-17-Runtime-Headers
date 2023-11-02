
@interface OTCurrentSecureElementIdentities : PBCodable <NSCopying> {
    OTSecureElementPeerIdentity * _localPeerIdentity;
    OTSecureElementPeerIdentity * _pendingLocalPeerIdentity;
    NSMutableArray * _trustedPeerSecureElementIdentities;
}

@property (nonatomic, readonly) bool hasLocalPeerIdentity;
@property (nonatomic, readonly) bool hasPendingLocalPeerIdentity;
@property (nonatomic, retain) OTSecureElementPeerIdentity *localPeerIdentity;
@property (nonatomic, retain) OTSecureElementPeerIdentity *pendingLocalPeerIdentity;
@property (nonatomic, retain) NSMutableArray *trustedPeerSecureElementIdentities;

+ (Class)trustedPeerSecureElementIdentitiesType;

- (void).cxx_destruct;
- (void)addTrustedPeerSecureElementIdentities:(id)arg1;
- (void)clearTrustedPeerSecureElementIdentities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocalPeerIdentity;
- (bool)hasPendingLocalPeerIdentity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localPeerIdentity;
- (void)mergeFrom:(id)arg1;
- (id)pendingLocalPeerIdentity;
- (bool)readFrom:(id)arg1;
- (void)setLocalPeerIdentity:(id)arg1;
- (void)setPendingLocalPeerIdentity:(id)arg1;
- (void)setTrustedPeerSecureElementIdentities:(id)arg1;
- (id)trustedPeerSecureElementIdentities;
- (id)trustedPeerSecureElementIdentitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)trustedPeerSecureElementIdentitiesCount;
- (void)writeTo:(id)arg1;

@end
