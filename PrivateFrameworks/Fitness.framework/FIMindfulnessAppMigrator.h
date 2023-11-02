
@interface FIMindfulnessAppMigrator : NSObject {
    NSString * _container;
}

- (void).cxx_destruct;
- (long long)_integerForKey:(id)arg1 exists:(bool*)arg2;
- (void)_removeObjectForKey:(id)arg1;
- (void)_setInteger:(long long)arg1 key:(id)arg2;
- (void)_synchronize;
- (id)init;
- (id)initWithContainer:(id)arg1;
- (void)migrateIfNeeded;

@end
