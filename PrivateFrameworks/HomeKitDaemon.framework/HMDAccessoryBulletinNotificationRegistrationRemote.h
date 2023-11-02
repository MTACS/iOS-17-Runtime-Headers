
@interface HMDAccessoryBulletinNotificationRegistrationRemote : HMFObject <NSCopying, NSSecureCoding> {
    HMDAccessoryBulletinNotificationRegistration * _registration;
    HMDBulletinNotificationRegistrationSource * _source;
}

@property (readonly, copy) HMDAccessoryBulletinNotificationRegistration *registration;
@property (readonly, copy) HMDBulletinNotificationRegistrationSource *source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessoryBulletinNotificationRegistration:(id)arg1 source:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)registration;
- (id)source;

@end
