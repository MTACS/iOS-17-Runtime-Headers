
@interface HDDeviceManager : NSObject {
    HDDatabaseValueCache * _deviceEntitiesByDevice;
    HDDatabaseValueCache * _devicesByPersistentID;
    NSNumber * _noneDeviceID;
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (id)allDevicesWithError:(id*)arg1;
- (id)currentDeviceEntityWithError:(id*)arg1;
- (id)deviceEntitiesForDevice:(id)arg1 error:(id*)arg2;
- (id)deviceEntitiesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id*)arg3;
- (id)deviceEntityForDevice:(id)arg1 error:(id*)arg2;
- (id)deviceEntityForNoDeviceWithError:(id*)arg1;
- (id)deviceForPersistentID:(id)arg1 error:(id*)arg2;
- (id)devicesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithProfile:(id)arg1;

@end
