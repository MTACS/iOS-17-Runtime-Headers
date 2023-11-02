
@interface HKSPHealthStoreProvider : NSObject {
    HKHealthStore * _healthStore;
    HKSleepHealthStore * _sleepHealthStore;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKSleepHealthStore *sleepHealthStore;

+ (id)_initializedLocalDeviceHealthStore;

- (void).cxx_destruct;
- (id)healthStore;
- (id)initWithLocalDeviceHealthStore;
- (id)initWithSleepHealthStore:(id)arg1 healthStore:(id)arg2;
- (id)sleepHealthStore;

@end
