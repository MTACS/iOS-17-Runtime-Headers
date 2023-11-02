
@interface NPKProtoAcceptSubcredentialInvitationRequest : PBRequest <NSCopying> {
    NSData * _invitationData;
    NSData * _metadataData;
}

@property (nonatomic, readonly) bool hasInvitationData;
@property (nonatomic, readonly) bool hasMetadataData;
@property (nonatomic, retain) NSData *invitationData;
@property (nonatomic, retain) NSData *metadataData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInvitationData;
- (bool)hasMetadataData;
- (unsigned long long)hash;
- (id)invitationData;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadataData;
- (bool)readFrom:(id)arg1;
- (void)setInvitationData:(id)arg1;
- (void)setMetadataData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
