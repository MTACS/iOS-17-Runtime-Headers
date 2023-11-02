
@interface PPHealthKitImporter : NSObject {
    PPSQLDatabase * _db;
    HKHealthStore * _healthStore;
}

- (void).cxx_destruct;
- (void)importHealthKitData;
- (void)importHealthKitDataWithShouldContinueBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithDatabase:(id)arg1;

@end
