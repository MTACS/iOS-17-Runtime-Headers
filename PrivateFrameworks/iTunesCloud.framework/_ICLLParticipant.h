
@interface _ICLLParticipant : PBCodable <NSCopying> {
    NSString * _externalId;
    struct { 
        unsigned int participantId : 1; 
        unsigned int storefront : 1; 
        unsigned int unreliablePlaybackSyncStatus : 1; 
    }  _has;
    long long  _participantId;
    NSString * _participantUUID;
    int  _storefront;
    int  _unreliablePlaybackSyncStatus;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
