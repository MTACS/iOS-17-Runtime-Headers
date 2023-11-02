
@interface HAENHealthKitStore : NSObject {
    HKHealthStore * _healthStore;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)createHKCategorySampleForEvent:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)saveNotificationEventToHealthKit:(id)arg1;
- (id)saveNotificationEventToHealthKit:(id)arg1 withDelegate:(id)arg2;

@end
