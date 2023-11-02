
@interface NPKProtoMatchingInvitationOnDeviceRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int timeoutInSeconds : 1; 
    }  _has;
    NSData * _invitationData;
    unsigned long long  _timeoutInSeconds;
}

@property (nonatomic, readonly) bool hasInvitationData;
@property (nonatomic) bool hasTimeoutInSeconds;
@property (nonatomic, retain) NSData *invitationData;
@property (nonatomic) unsigned long long timeoutInSeconds;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInvitationData;
- (bool)hasTimeoutInSeconds;
- (unsigned long long)hash;
- (id)invitationData;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimeoutInSeconds:(bool)arg1;
- (void)setInvitationData:(id)arg1;
- (void)setTimeoutInSeconds:(unsigned long long)arg1;
- (unsigned long long)timeoutInSeconds;
- (void)writeTo:(id)arg1;

@end
