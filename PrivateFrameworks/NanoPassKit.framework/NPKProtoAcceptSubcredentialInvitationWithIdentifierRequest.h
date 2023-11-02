
@interface NPKProtoAcceptSubcredentialInvitationWithIdentifierRequest : PBRequest <NSCopying> {
    NSString * _invitationIdentifier;
    NSData * _metadataData;
}

@property (nonatomic, readonly) bool hasInvitationIdentifier;
@property (nonatomic, readonly) bool hasMetadataData;
@property (nonatomic, retain) NSString *invitationIdentifier;
@property (nonatomic, retain) NSData *metadataData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInvitationIdentifier;
- (bool)hasMetadataData;
- (unsigned long long)hash;
- (id)invitationIdentifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadataData;
- (bool)readFrom:(id)arg1;
- (void)setInvitationIdentifier:(id)arg1;
- (void)setMetadataData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
