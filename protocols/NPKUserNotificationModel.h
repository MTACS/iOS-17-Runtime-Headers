
@protocol NPKUserNotificationModel <NSObject>

@required

- (NSString *)body;
- (NSString *)identifier;
- (bool)isSuppressed;
- (NSString *)notificationCategoryIdentifier;
- (NSString *)title;
- (NSDictionary *)userInfo;
- (bool)wantsBadgedIcon;

@end
