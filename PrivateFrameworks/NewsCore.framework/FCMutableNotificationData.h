
@interface FCMutableNotificationData : FCNotificationDropboxData <FCMutableNotificationData>

@property (nonatomic, copy) NSString *baseURLString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceDigestMode;
@property (nonatomic, copy) NSString *deviceToken;
@property (nonatomic, readonly) NSMutableDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *notificationUserID;
@property (nonatomic, copy) NSString *storefrontID;
@property (readonly) Class superclass;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)setBaseURLString:(id)arg1;
- (void)setDeviceDigestMode:(int)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)setNotificationUserID:(id)arg1;
- (void)setStorefrontID:(id)arg1;

@end
