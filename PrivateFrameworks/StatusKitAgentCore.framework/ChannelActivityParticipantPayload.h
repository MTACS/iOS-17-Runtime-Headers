
@interface ChannelActivityParticipantPayload : PBCodable <NSCopying> {
    NSData * _encryptedParticipantPayload;
    struct { 
        unsigned int serverUpdateTimestampSeconds : 1; 
    }  _has;
    unsigned long long  _serverUpdateTimestampSeconds;
}

@property (nonatomic, retain) NSData *encryptedParticipantPayload;
@property (nonatomic, readonly) bool hasEncryptedParticipantPayload;
@property (nonatomic) bool hasServerUpdateTimestampSeconds;
@property (nonatomic) unsigned long long serverUpdateTimestampSeconds;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedParticipantPayload;
- (bool)hasEncryptedParticipantPayload;
- (bool)hasServerUpdateTimestampSeconds;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)serverUpdateTimestampSeconds;
- (void)setEncryptedParticipantPayload:(id)arg1;
- (void)setHasServerUpdateTimestampSeconds:(bool)arg1;
- (void)setServerUpdateTimestampSeconds:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
