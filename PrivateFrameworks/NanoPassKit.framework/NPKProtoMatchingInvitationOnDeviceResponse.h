
@interface NPKProtoMatchingInvitationOnDeviceResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NSData * _invitationData;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasInvitationData;
@property (nonatomic, retain) NSData *invitationData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasInvitationData;
- (unsigned long long)hash;
- (id)invitationData;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setInvitationData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
