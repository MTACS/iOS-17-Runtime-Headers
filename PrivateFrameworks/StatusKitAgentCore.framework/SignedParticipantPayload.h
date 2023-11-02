
@interface SignedParticipantPayload : PBCodable <NSCopying> {
    DecryptedParticipantPayload * _payload;
    NSData * _signature;
}

@property (nonatomic, readonly) bool hasPayload;
@property (nonatomic, readonly) bool hasSignature;
@property (nonatomic, retain) DecryptedParticipantPayload *payload;
@property (nonatomic, retain) NSData *signature;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPayload;
- (bool)hasSignature;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)payload;
- (bool)readFrom:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;
- (void)writeTo:(id)arg1;

@end
