
@interface NPKProtoCreateFidoKeyRequest : PBRequest <NSCopying> {
    NSData * _challenge;
    NSData * _externalizedAuth;
    NSString * _relyingParty;
    NSString * _relyingPartyAccountHash;
}

@property (nonatomic, retain) NSData *challenge;
@property (nonatomic, retain) NSData *externalizedAuth;
@property (nonatomic, readonly) bool hasChallenge;
@property (nonatomic, readonly) bool hasExternalizedAuth;
@property (nonatomic, readonly) bool hasRelyingParty;
@property (nonatomic, readonly) bool hasRelyingPartyAccountHash;
@property (nonatomic, retain) NSString *relyingParty;
@property (nonatomic, retain) NSString *relyingPartyAccountHash;

- (void).cxx_destruct;
- (id)challenge;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalizedAuth;
- (bool)hasChallenge;
- (bool)hasExternalizedAuth;
- (bool)hasRelyingParty;
- (bool)hasRelyingPartyAccountHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)relyingParty;
- (id)relyingPartyAccountHash;
- (void)setChallenge:(id)arg1;
- (void)setExternalizedAuth:(id)arg1;
- (void)setRelyingParty:(id)arg1;
- (void)setRelyingPartyAccountHash:(id)arg1;
- (void)writeTo:(id)arg1;

@end
