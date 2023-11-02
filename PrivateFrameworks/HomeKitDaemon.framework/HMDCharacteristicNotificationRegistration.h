
@interface HMDCharacteristicNotificationRegistration : HMFObject {
    NSUUID * _accessoryUUID;
    NSNumber * _characteristicInstanceID;
    NSString * _deviceIdsDestination;
    bool  _enabled;
    NSDate * _lastModified;
    NSUUID * _userUUID;
}

@property (readonly) NSUUID *accessoryUUID;
@property (readonly) NSNumber *characteristicInstanceID;
@property (readonly, copy) NSString *deviceIdsDestination;
@property (readonly) bool enabled;
@property (readonly) NSDate *lastModified;
@property (readonly) NSUUID *userUUID;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (id)characteristicInstanceID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceIdsDestination;
- (bool)enabled;
- (unsigned long long)hash;
- (id)initWithAccessoryUUID:(id)arg1 characteristicInstanceID:(id)arg2 deviceIdsDestination:(id)arg3 userUUID:(id)arg4 lastModified:(id)arg5 enabled:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (id)lastModified;
- (id)userUUID;

@end
