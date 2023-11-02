
@protocol PHAJobTimeHandlerProtocol <NSObject>

@required

- (bool)completedJobTodayForKey:(NSString *)arg1;
- (bool)didExceedTimeInterval:(double)arg1 forKey:(NSString *)arg2;
- (NSDictionary *)libraryScopedWorkerPreferences;
- (void)setLastCompletedDate:(NSDate *)arg1 andVersion:(unsigned long long)arg2 forTaskName:(NSString *)arg3;
- (void)setLibraryScopedWorkerPreferencesValue:(id)arg1 forKey:(NSString *)arg2;
- (void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(NSDictionary *)arg1 keysToRemove:(NSArray *)arg2;
- (unsigned long long)versionForTaskName:(NSString *)arg1;

@end
