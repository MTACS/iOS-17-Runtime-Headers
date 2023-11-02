
@interface HDCodableCompanionUserNotificationConfiguration : PBCodable <NSCopying> {
    struct { 
        unsigned int notificationType : 1; 
    }  _has;
    int  _notificationType;
}

@property (nonatomic) bool hasNotificationType;
@property (nonatomic) int notificationType;

- (int)StringAsNotificationType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNotificationType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)notificationType;
- (id)notificationTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasNotificationType:(bool)arg1;
- (void)setNotificationType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
