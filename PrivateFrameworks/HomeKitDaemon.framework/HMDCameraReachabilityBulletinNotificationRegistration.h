
@interface HMDCameraReachabilityBulletinNotificationRegistration : HMDBulletinNotificationRegistration <HMDBulletinNotificationRegistrationRemoteCoding, NSCopying, NSSecureCoding> {
    NSUUID * _accessoryUUID;
}

@property (readonly, copy) NSUUID *accessoryUUID;

+ (bool)supportsSecureCoding;
+ (id)type;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessoryUUID:(id)arg1 conditions:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serializedRegistrationForRemoteMessage;

@end
