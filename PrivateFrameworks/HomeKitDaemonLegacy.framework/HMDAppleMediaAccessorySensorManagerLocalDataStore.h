
@interface HMDAppleMediaAccessorySensorManagerLocalDataStore : NSObject <HMDAppleMediaAccessorySensorManagerDataStore> {
    NSUserDefaults * _defaults;
}

@property (nonatomic, retain) NSUserDefaults *defaults;

- (void).cxx_destruct;
- (id)defaults;
- (void)fetchSensorUUIDWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithUserDefaults:(id)arg1;
- (void)saveSensorUUID:(id)arg1;
- (void)saveSensorUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)setDefaults:(id)arg1;

@end
