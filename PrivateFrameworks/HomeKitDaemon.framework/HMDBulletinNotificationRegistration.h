
@interface HMDBulletinNotificationRegistration : HMFObject <HMDBulletinNotificationRegistrationRemoteCoding, NSCopying, NSSecureCoding> {
    NSSet * _conditions;
}

@property (readonly, copy) NSSet *conditions;
@property (readonly, copy) NSPredicate *predicate;

+ (bool)doesTypeMatch:(id)arg1 against:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)type;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)conditions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConditions:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (id)serializedRegistrationForRemoteMessage;

@end
