
@interface DecryptedParticipantPayload : PBCodable <NSCopying> {
    NSString * _channelIdentifier;
    NSData * _clientPayload;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _presenceIdentifier;
    unsigned long long  _timestamp;
    NSString * _tokenUri;
}

@property (nonatomic, retain) NSString *channelIdentifier;
@property (nonatomic, retain) NSData *clientPayload;
@property (nonatomic, readonly) bool hasChannelIdentifier;
@property (nonatomic, readonly) bool hasClientPayload;
@property (nonatomic, readonly) bool hasPresenceIdentifier;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTokenUri;
@property (nonatomic, retain) NSString *presenceIdentifier;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *tokenUri;

- (void).cxx_destruct;
- (id)channelIdentifier;
- (id)clientPayload;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChannelIdentifier;
- (bool)hasClientPayload;
- (bool)hasPresenceIdentifier;
- (bool)hasTimestamp;
- (bool)hasTokenUri;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)presenceIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setChannelIdentifier:(id)arg1;
- (void)setClientPayload:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPresenceIdentifier:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTokenUri:(id)arg1;
- (unsigned long long)timestamp;
- (id)tokenUri;
- (void)writeTo:(id)arg1;

@end
