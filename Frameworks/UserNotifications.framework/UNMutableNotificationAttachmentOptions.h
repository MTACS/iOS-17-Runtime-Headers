
@interface UNMutableNotificationAttachmentOptions : UNNotificationAttachmentOptions

@property (nonatomic) unsigned long long displayLocation;
@property (nonatomic, copy) NSDictionary *thumbnailGeneratorUserInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDisplayLocation:(unsigned long long)arg1;
- (void)setThumbnailGeneratorUserInfo:(id)arg1;

@end
