
@interface SADeviceSetDeviceToSleep : SADomainCommand

+ (id)setDeviceToSleep;
+ (id)setDeviceToSleepWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
