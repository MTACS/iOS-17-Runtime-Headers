
@interface NPKProtoCreateShareForPartialShareInvitationResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NSData * _shareURLData;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasShareURLData;
@property (nonatomic, retain) NSData *shareURLData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasShareURLData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setShareURLData:(id)arg1;
- (id)shareURLData;
- (void)writeTo:(id)arg1;

@end
