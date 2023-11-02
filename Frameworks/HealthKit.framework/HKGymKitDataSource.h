
@interface HKGymKitDataSource : NSObject <HKWorkoutDataSource, _HKXPCExportable> {
    HKHealthStore * _healthStore;
    NSUUID * _identifier;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)defaultConfigurationWithWorkoutConfiguration:(id)arg1;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)_startTaskServerIfNeeded;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)healthStore;
- (id)identifier;
- (id)initWithHealthStore:(id)arg1 workoutConfiguration:(id)arg2;
- (id)proxyProvider;
- (id)remoteInterface;
- (void)setHealthStore:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProxyProvider:(id)arg1;
- (void)workoutBuilderDidFinish;

@end
