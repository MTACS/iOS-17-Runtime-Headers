
@interface NPKProtoDeclineRelatedInvitationsIfNecessaryRequest : PBRequest <NSCopying> {
    NSData * _invitationData;
}

@property (nonatomic, readonly) bool hasInvitationData;
@property (nonatomic, retain) NSData *invitationData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInvitationData;
- (unsigned long long)hash;
- (id)invitationData;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setInvitationData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
