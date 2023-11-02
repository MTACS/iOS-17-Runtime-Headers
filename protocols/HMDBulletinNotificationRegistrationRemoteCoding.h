
@protocol HMDBulletinNotificationRegistrationRemoteCoding

@required

+ (NSString *)type;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (NSDictionary *)serializedRegistrationForRemoteMessage;

@end
