
@interface HMDCameraSignificantEventBulletinNotificationRegistration : HMDBulletinNotificationRegistration <HMDBulletinNotificationRegistrationRemoteCoding, NSCopying, NSSecureCoding> {
    NSUUID * _cameraIdentifier;
    unsigned long long  _notificationModes;
    unsigned long long  _personFamiliarityOptions;
    unsigned long long  _significantEventTypes;
}

@property (readonly, copy) NSUUID *cameraIdentifier;
@property (readonly) unsigned long long notificationModes;
@property (readonly) unsigned long long personFamiliarityOptions;
@property (readonly) unsigned long long significantEventTypes;

+ (bool)supportsSecureCoding;
+ (id)type;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)cameraIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCameraIdentifier:(id)arg1 notificationModes:(unsigned long long)arg2 significantEventTypes:(unsigned long long)arg3 personFamiliarityOptions:(unsigned long long)arg4 conditions:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)notificationModes;
- (unsigned long long)personFamiliarityOptions;
- (id)predicate;
- (id)serializedRegistrationForRemoteMessage;
- (unsigned long long)significantEventTypes;

@end
