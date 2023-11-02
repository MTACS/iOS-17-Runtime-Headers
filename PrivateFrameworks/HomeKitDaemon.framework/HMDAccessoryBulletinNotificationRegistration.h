
@interface HMDAccessoryBulletinNotificationRegistration : HMDBulletinNotificationRegistration <HMDBulletinNotificationRegistrationRemoteCoding, NSCopying, NSSecureCoding> {
    NSUUID * _accessoryUUID;
    NSNumber * _characteristicInstanceID;
    NSNumber * _serviceInstanceID;
}

@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy) NSNumber *characteristicInstanceID;
@property (readonly, copy) NSNumber *serviceInstanceID;

+ (bool)supportsSecureCoding;
+ (id)type;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (id)characteristicInstanceID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3 conditions:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serializedRegistrationForRemoteMessage;
- (id)serviceInstanceID;

@end
