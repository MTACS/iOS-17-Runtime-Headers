
@interface STStorageDataManager : NSObject

+ (id)applicationRecords;
+ (id)computeBundleRemappings:(id)arg1;
+ (id)computeCategoriesForApps:(id)arg1;
+ (void)fixClonesInPhotosAndMessages:(id)arg1;
+ (id)getLocalAppId:(id)arg1 foreignAppId:(id)arg2;
+ (id)overridesFor:(id)arg1;
+ (id)sharedContainersFor:(id)arg1;
+ (id)updateAppsWithPrevious:(id)arg1 usageBundles:(id)arg2 skipAppRecordBlock:(id /* block */)arg3;

@end
