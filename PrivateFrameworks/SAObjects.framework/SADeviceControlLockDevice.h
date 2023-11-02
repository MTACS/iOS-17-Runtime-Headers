
@interface SADeviceControlLockDevice : SABaseClientBoundCommand

+ (id)lockDevice;
+ (id)lockDeviceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
