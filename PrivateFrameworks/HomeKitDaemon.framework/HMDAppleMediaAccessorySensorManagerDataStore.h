
@interface HMDAppleMediaAccessorySensorManagerDataStore : NSObject <HMDAppleMediaAccessorySensorManagerDataStore> {
    NSManagedObjectContext * _localMOC;
}

- (void).cxx_destruct;
- (void)fetchSensorUUIDWithCompletion:(id /* block */)arg1;
- (id)initWithLocalMOC:(id)arg1;
- (void)saveSensorUUID:(id)arg1;
- (void)saveSensorUUID:(id)arg1 completion:(id /* block */)arg2;

@end
