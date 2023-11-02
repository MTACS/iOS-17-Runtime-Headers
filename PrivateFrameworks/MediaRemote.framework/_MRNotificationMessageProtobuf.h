
@interface _MRNotificationMessageProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _notifications;
    NSMutableArray * _playerPaths;
    NSMutableArray * _userInfos;
}

@property (nonatomic, retain) NSMutableArray *notifications;
@property (nonatomic, retain) NSMutableArray *playerPaths;
@property (nonatomic, retain) NSMutableArray *userInfos;

+ (Class)notificationType;
+ (Class)playerPathType;
+ (Class)userInfoType;

- (void).cxx_destruct;
- (void)addNotification:(id)arg1;
- (void)addPlayerPath:(id)arg1;
- (void)addUserInfo:(id)arg1;
- (void)clearNotifications;
- (void)clearPlayerPaths;
- (void)clearUserInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notificationAtIndex:(unsigned long long)arg1;
- (id)notifications;
- (unsigned long long)notificationsCount;
- (id)playerPathAtIndex:(unsigned long long)arg1;
- (id)playerPaths;
- (unsigned long long)playerPathsCount;
- (bool)readFrom:(id)arg1;
- (void)setNotifications:(id)arg1;
- (void)setPlayerPaths:(id)arg1;
- (void)setUserInfos:(id)arg1;
- (id)userInfoAtIndex:(unsigned long long)arg1;
- (id)userInfos;
- (unsigned long long)userInfosCount;
- (void)writeTo:(id)arg1;

@end
