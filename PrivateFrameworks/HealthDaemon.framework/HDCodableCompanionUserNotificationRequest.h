
@interface HDCodableCompanionUserNotificationRequest : PBRequest <NSCopying> {
    HDCodableCompanionUserNotificationConfiguration * _notificationConfiguration;
    NSString * _requestIdentifier;
}

@property (nonatomic, readonly) bool hasNotificationConfiguration;
@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic, retain) HDCodableCompanionUserNotificationConfiguration *notificationConfiguration;
@property (nonatomic, retain) NSString *requestIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNotificationConfiguration;
- (bool)hasRequestIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notificationConfiguration;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (void)setNotificationConfiguration:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
