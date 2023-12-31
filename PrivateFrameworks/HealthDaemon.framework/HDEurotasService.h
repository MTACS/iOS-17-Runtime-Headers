
@interface HDEurotasService : HDHealthService

+ (long long)serviceType;
+ (id)serviceUUID;

- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (id)servicesInProfile;

@end
