
@interface SharedChannelPublishRequest : PBRequest <NSCopying> {
    AuthCredential * _authCredential;
    ChannelPublishPayload * _channelPublishPayload;
}

@property (nonatomic, retain) AuthCredential *authCredential;
@property (nonatomic, retain) ChannelPublishPayload *channelPublishPayload;
@property (nonatomic, readonly) bool hasAuthCredential;
@property (nonatomic, readonly) bool hasChannelPublishPayload;

- (void).cxx_destruct;
- (id)authCredential;
- (id)channelPublishPayload;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthCredential;
- (bool)hasChannelPublishPayload;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthCredential:(id)arg1;
- (void)setChannelPublishPayload:(id)arg1;
- (void)writeTo:(id)arg1;

@end
