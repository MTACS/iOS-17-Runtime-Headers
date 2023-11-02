
@interface HMDRemoteEventRouterAccessControl : NSObject {
    unsigned long long  _allowedDeviceTypes;
    unsigned long long  _allowedUserTypes;
}

@property (readonly) unsigned long long allowedDeviceTypes;
@property (readonly) unsigned long long allowedUserTypes;

+ (id)allowAllUsersAndDevicesAccessControl;
+ (id)allowSharedAdminsAndAllDevicesAccessControl;
+ (unsigned long long)remoteDeviceAccessControlFromNumber:(id)arg1;
+ (unsigned long long)remoteUserAccessControlFromNumber:(id)arg1;

- (unsigned long long)allowedDeviceTypes;
- (unsigned long long)allowedUserTypes;
- (id)initWithAllowedUserTypes:(unsigned long long)arg1 deviceCategories:(unsigned long long)arg2;

@end
