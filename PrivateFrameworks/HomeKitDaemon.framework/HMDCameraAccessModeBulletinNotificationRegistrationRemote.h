
@interface HMDCameraAccessModeBulletinNotificationRegistrationRemote : HMFObject <NSCopying, NSSecureCoding> {
    HMDCameraAccessModeBulletinNotificationRegistration * _registration;
    HMDBulletinNotificationRegistrationSource * _source;
}

@property (readonly, copy) HMDCameraAccessModeBulletinNotificationRegistration *registration;
@property (readonly, copy) HMDBulletinNotificationRegistrationSource *source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCameraAccessModeBulletinNotificationRegistration:(id)arg1 source:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)registration;
- (id)source;

@end
