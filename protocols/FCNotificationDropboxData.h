
@protocol FCNotificationDropboxData <NSObject, NSMutableCopying>

@required

- (NSString *)baseURLString;
- (int)deviceDigestMode;
- (NSString *)deviceToken;
- (NSString *)notificationUserID;
- (NSString *)storefrontID;

@end
