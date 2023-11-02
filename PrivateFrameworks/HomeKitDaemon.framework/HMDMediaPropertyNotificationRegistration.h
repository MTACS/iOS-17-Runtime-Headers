
@interface HMDMediaPropertyNotificationRegistration : HMFObject {
    NSString * _deviceIdsDestination;
    bool  _enabled;
    NSDate * _lastModified;
    NSUUID * _mediaProfileUniqueIdentifier;
    NSString * _mediaProperty;
    NSUUID * _userUUID;
}

@property (readonly, copy) NSString *deviceIdsDestination;
@property (readonly) bool enabled;
@property (readonly) NSDate *lastModified;
@property (readonly) NSUUID *mediaProfileUniqueIdentifier;
@property (readonly, copy) NSString *mediaProperty;
@property (readonly) NSUUID *userUUID;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceIdsDestination;
- (bool)enabled;
- (unsigned long long)hash;
- (id)initWithMediaProfileUniqueIdentifier:(id)arg1 mediaProperty:(id)arg2 deviceIdsDestination:(id)arg3 userUUID:(id)arg4 lastModified:(id)arg5 enabled:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (id)lastModified;
- (id)mediaProfileUniqueIdentifier;
- (id)mediaProperty;
- (id)userUUID;

@end
