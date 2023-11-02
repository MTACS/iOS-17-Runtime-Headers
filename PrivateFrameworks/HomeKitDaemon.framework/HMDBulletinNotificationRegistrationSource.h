
@interface HMDBulletinNotificationRegistrationSource : HMFObject <HMDBulletinNotificationRegistrationRemoteCoding, NSCopying, NSSecureCoding> {
    HMDDeviceAddress * _deviceAddress;
    NSUUID * _userUUID;
}

@property (readonly, copy) HMDDevice *device;
@property (readonly, copy) HMDDeviceAddress *deviceAddress;
@property (readonly, copy) NSUUID *userUUID;

+ (bool)doesTypeMatch:(id)arg1 against:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)type;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)device;
- (id)deviceAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUserUUID:(id)arg1 deviceAddress:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)serializedRegistrationForRemoteMessage;
- (id)userUUID;

@end
