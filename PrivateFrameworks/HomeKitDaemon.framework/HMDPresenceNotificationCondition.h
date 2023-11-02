
@interface HMDPresenceNotificationCondition : HMDNotificationCondition <HMDBulletinNotificationRegistrationRemoteCoding> {
    unsigned long long  _presenceEventType;
    unsigned long long  _presenceEventUserType;
    NSSet * _userUUIDs;
}

@property (readonly) unsigned long long presenceEventType;
@property (readonly) unsigned long long presenceEventUserType;
@property (readonly, copy) NSSet *userUUIDs;

+ (bool)supportsSecureCoding;
+ (id)type;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPresenceEventType:(unsigned long long)arg1 presenceEventUserType:(unsigned long long)arg2 userUUIDs:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)presenceEventType;
- (unsigned long long)presenceEventUserType;
- (id)serializedRegistrationForRemoteMessage;
- (id)userUUIDs;

@end
