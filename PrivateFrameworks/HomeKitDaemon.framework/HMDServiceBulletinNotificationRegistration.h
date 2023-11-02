
@interface HMDServiceBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding> {
    NSUUID * _accessoryUUID;
    NSNumber * _serviceInstanceID;
}

@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy) NSNumber *serviceInstanceID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 conditions:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serviceInstanceID;

@end
