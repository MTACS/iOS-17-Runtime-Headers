
@interface NTPBPushNotifySubscriptionRequest : PBRequest <NSCopying> {
    NTPBDeviceInfo * _deviceInfo;
    NSMutableArray * _notificationEntitys;
    NSString * _notificationUserId;
    NSMutableArray * _topicsFolloweds;
    NSString * _userStorefrontId;
}

@property (nonatomic, retain) NTPBDeviceInfo *deviceInfo;
@property (nonatomic, readonly) bool hasDeviceInfo;
@property (nonatomic, readonly) bool hasNotificationUserId;
@property (nonatomic, readonly) bool hasUserStorefrontId;
@property (nonatomic, retain) NSMutableArray *notificationEntitys;
@property (nonatomic, retain) NSString *notificationUserId;
@property (nonatomic, retain) NSMutableArray *topicsFolloweds;
@property (nonatomic, retain) NSString *userStorefrontId;

+ (Class)notificationEntityType;
+ (Class)topicsFollowedType;

- (void).cxx_destruct;
- (void)addNotificationEntity:(id)arg1;
- (void)addTopicsFollowed:(id)arg1;
- (void)clearNotificationEntitys;
- (void)clearTopicsFolloweds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceInfo;
- (id)dictionaryRepresentation;
- (bool)hasDeviceInfo;
- (bool)hasNotificationUserId;
- (bool)hasUserStorefrontId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notificationEntityAtIndex:(unsigned long long)arg1;
- (id)notificationEntitys;
- (unsigned long long)notificationEntitysCount;
- (id)notificationUserId;
- (bool)readFrom:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setNotificationEntitys:(id)arg1;
- (void)setNotificationUserId:(id)arg1;
- (void)setTopicsFolloweds:(id)arg1;
- (void)setUserStorefrontId:(id)arg1;
- (id)topicsFollowedAtIndex:(unsigned long long)arg1;
- (id)topicsFolloweds;
- (unsigned long long)topicsFollowedsCount;
- (id)userStorefrontId;
- (void)writeTo:(id)arg1;

@end
