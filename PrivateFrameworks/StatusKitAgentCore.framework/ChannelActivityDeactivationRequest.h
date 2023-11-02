
@interface ChannelActivityDeactivationRequest : PBRequest <NSCopying> {
    NSString * _adopter;
    AuthCredential * _authCredential;
    ChannelIdentity * _channelIdentity;
    unsigned long long  _clientTimestampSeconds;
    struct { 
        unsigned int clientTimestampSeconds : 1; 
    }  _has;
    NSData * _uuid;
}

@property (nonatomic, retain) NSString *adopter;
@property (nonatomic, retain) AuthCredential *authCredential;
@property (nonatomic, retain) ChannelIdentity *channelIdentity;
@property (nonatomic) unsigned long long clientTimestampSeconds;
@property (nonatomic, readonly) bool hasAdopter;
@property (nonatomic, readonly) bool hasAuthCredential;
@property (nonatomic, readonly) bool hasChannelIdentity;
@property (nonatomic) bool hasClientTimestampSeconds;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (id)adopter;
- (id)authCredential;
- (id)channelIdentity;
- (unsigned long long)clientTimestampSeconds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAdopter;
- (bool)hasAuthCredential;
- (bool)hasChannelIdentity;
- (bool)hasClientTimestampSeconds;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAdopter:(id)arg1;
- (void)setAuthCredential:(id)arg1;
- (void)setChannelIdentity:(id)arg1;
- (void)setClientTimestampSeconds:(unsigned long long)arg1;
- (void)setHasClientTimestampSeconds:(bool)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
