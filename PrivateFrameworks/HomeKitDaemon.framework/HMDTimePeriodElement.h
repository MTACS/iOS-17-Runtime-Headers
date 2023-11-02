
@interface HMDTimePeriodElement : HMFObject <HMDBulletinNotificationRegistrationRemoteCoding>

+ (bool)doesTypeMatch:(id)arg1 against:(id)arg2;
+ (id)type;

- (id)initWithDictionary:(id)arg1;
- (id)serializedRegistrationForRemoteMessage;

@end
