
@interface NPKProtoAcceptSubcredentialInvitationResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NPKProtoPass * _passForInvitation;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasPassForInvitation;
@property (nonatomic, retain) NPKProtoPass *passForInvitation;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasPassForInvitation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passForInvitation;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setPassForInvitation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
