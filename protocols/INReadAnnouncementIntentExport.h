
@protocol INReadAnnouncementIntentExport <NSObject, JSExport>

@required

- (id)init;
- (long long)readType;
- (void)setReadType:(long long)arg1;
- (void)setStartAnnouncementIdentifier:(NSString *)arg1;
- (void)setUserNotificationType:(long long)arg1;
- (NSString *)startAnnouncementIdentifier;
- (long long)userNotificationType;

@end
