
@interface ATXPBNotificationTimeSensitiveStatus : PBCodable <NSCopying> {
    NSString * _bundleId;
    struct { 
        unsigned int isTimeSensitiveAndEngagedNotification : 1; 
        unsigned int isTimeSensitiveNotification : 1; 
    }  _has;
    bool  _isTimeSensitiveAndEngagedNotification;
    bool  _isTimeSensitiveNotification;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasIsTimeSensitiveAndEngagedNotification;
@property (nonatomic) bool hasIsTimeSensitiveNotification;
@property (nonatomic) bool isTimeSensitiveAndEngagedNotification;
@property (nonatomic) bool isTimeSensitiveNotification;

- (void).cxx_destruct;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleId;
- (bool)hasIsTimeSensitiveAndEngagedNotification;
- (bool)hasIsTimeSensitiveNotification;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isTimeSensitiveAndEngagedNotification;
- (bool)isTimeSensitiveNotification;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setHasIsTimeSensitiveAndEngagedNotification:(bool)arg1;
- (void)setHasIsTimeSensitiveNotification:(bool)arg1;
- (void)setIsTimeSensitiveAndEngagedNotification:(bool)arg1;
- (void)setIsTimeSensitiveNotification:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
