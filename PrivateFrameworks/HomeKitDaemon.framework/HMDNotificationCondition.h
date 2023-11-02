
@interface HMDNotificationCondition : HMFObject <HMDBulletinNotificationRegistrationRemoteCoding, NSCopying, NSSecureCoding>

+ (bool)doesTypeMatch:(id)arg1 against:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serializedRegistrationForRemoteMessage;

@end
