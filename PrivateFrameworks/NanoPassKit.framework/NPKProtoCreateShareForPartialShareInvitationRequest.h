
@interface NPKProtoCreateShareForPartialShareInvitationRequest : PBRequest <NSCopying> {
    NSData * _authorizationData;
    NSData * _inviteData;
}

@property (nonatomic, retain) NSData *authorizationData;
@property (nonatomic, readonly) bool hasAuthorizationData;
@property (nonatomic, retain) NSData *inviteData;

- (void).cxx_destruct;
- (id)authorizationData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthorizationData;
- (unsigned long long)hash;
- (id)inviteData;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthorizationData:(id)arg1;
- (void)setInviteData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
