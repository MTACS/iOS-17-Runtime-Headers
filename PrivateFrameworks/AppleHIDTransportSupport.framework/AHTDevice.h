
@interface AHTDevice : AHTCommon

+ (id)allDevices;
+ (id)deviceWithParentRegistryId:(unsigned long long)arg1;
+ (id)withName:(id)arg1;
+ (id)withService:(unsigned int)arg1;

- (id)description;
- (id)getBootLoader;
- (id)getInterface:(unsigned char)arg1;
- (id)getInterfaceWithName:(id)arg1;
- (id)getInterfaces;
- (bool)getPower:(long long*)arg1;
- (id)initWithService:(unsigned int)arg1;
- (id)reporterResults;
- (bool)reset;
- (bool)setPower:(long long)arg1;

@end
