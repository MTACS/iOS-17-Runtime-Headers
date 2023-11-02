
@interface ChannelIdentity : PBCodable <NSCopying> {
    NSData * _channelId;
    int  _channelOwnershipType;
    NSData * _channelToken;
    NSString * _channelTopic;
    struct { 
        unsigned int channelOwnershipType : 1; 
    }  _has;
}

@property (nonatomic, retain) NSData *channelId;
@property (nonatomic) int channelOwnershipType;
@property (nonatomic, retain) NSData *channelToken;
@property (nonatomic, retain) NSString *channelTopic;
@property (nonatomic, readonly) bool hasChannelId;
@property (nonatomic) bool hasChannelOwnershipType;
@property (nonatomic, readonly) bool hasChannelToken;
@property (nonatomic, readonly) bool hasChannelTopic;

- (void).cxx_destruct;
- (int)StringAsChannelOwnershipType:(id)arg1;
- (id)channelId;
- (int)channelOwnershipType;
- (id)channelOwnershipTypeAsString:(int)arg1;
- (id)channelToken;
- (id)channelTopic;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChannelId;
- (bool)hasChannelOwnershipType;
- (bool)hasChannelToken;
- (bool)hasChannelTopic;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChannelId:(id)arg1;
- (void)setChannelOwnershipType:(int)arg1;
- (void)setChannelToken:(id)arg1;
- (void)setChannelTopic:(id)arg1;
- (void)setHasChannelOwnershipType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
