
@interface EKSideTableContext : NSManagedObjectContext {
    NSString * _path;
}

+ (id)sideTableContext;

- (void).cxx_destruct;
- (id)_alarmsMatchingPredicate:(id)arg1;
- (id)_managedObjectModel;
- (id)_pathForPersistentStore;
- (id)_persistentStoreCoordinator;
- (bool)_removeSqliteFiles;
- (id)_settingForKey:(id)arg1;
- (id)_urlForPersistentStore;
- (id)alarmsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (void)deleteAllAlarms;
- (id)initWithConcurrencyType:(unsigned long long)arg1;
- (id)insertNewAlarm;
- (id)nextAlarmFireTime;
- (id)rootDirectory;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)settingForKey:(id)arg1;

@end
