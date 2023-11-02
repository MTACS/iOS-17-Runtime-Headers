
@protocol FCMutableNotificationData <FCNotificationDropboxData>

@required

- (NSString *)baseURLString;
- (int)deviceDigestMode;
- (NSString *)deviceToken;
- (NSString *)notificationUserID;
- (void)setBaseURLString:(NSString *)arg1;
- (void)setDeviceDigestMode:(int)arg1;
- (void)setDeviceToken:(NSString *)arg1;
- (void)setNotificationUserID:(NSString *)arg1;
- (void)setStorefrontID:(NSString *)arg1;
- (NSString *)storefrontID;

@end
