
@interface FCCAchievementNotificationContentProtobuf : PBCodable <NSCopying> {
    NSData * _achievementData;
}

@property (nonatomic, retain) NSData *achievementData;
@property (nonatomic, readonly) bool hasAchievementData;

- (void).cxx_destruct;
- (id)achievementData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAchievementData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAchievementData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
