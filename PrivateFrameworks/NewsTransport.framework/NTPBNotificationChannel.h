
@interface NTPBNotificationChannel : PBCodable <NSCopying> {
    NSString * _channelId;
}

@property (nonatomic, retain) NSString *channelId;
@property (nonatomic, readonly) bool hasChannelId;

- (void).cxx_destruct;
- (id)channelId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChannelId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChannelId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
