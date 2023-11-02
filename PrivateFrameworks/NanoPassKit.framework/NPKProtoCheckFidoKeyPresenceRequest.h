
@interface NPKProtoCheckFidoKeyPresenceRequest : PBRequest <NSCopying> {
    NSData * _fidoKeyHash;
    NSString * _relyingParty;
    NSString * _relyingPartyAccountHash;
}

@property (nonatomic, retain) NSData *fidoKeyHash;
@property (nonatomic, readonly) bool hasFidoKeyHash;
@property (nonatomic, readonly) bool hasRelyingParty;
@property (nonatomic, readonly) bool hasRelyingPartyAccountHash;
@property (nonatomic, retain) NSString *relyingParty;
@property (nonatomic, retain) NSString *relyingPartyAccountHash;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fidoKeyHash;
- (bool)hasFidoKeyHash;
- (bool)hasRelyingParty;
- (bool)hasRelyingPartyAccountHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)relyingParty;
- (id)relyingPartyAccountHash;
- (void)setFidoKeyHash:(id)arg1;
- (void)setRelyingParty:(id)arg1;
- (void)setRelyingPartyAccountHash:(id)arg1;
- (void)writeTo:(id)arg1;

@end
