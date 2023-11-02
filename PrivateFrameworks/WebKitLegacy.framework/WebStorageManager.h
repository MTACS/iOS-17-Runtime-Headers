
@interface WebStorageManager : NSObject

+ (id)_storageDirectoryPath;
+ (void)closeIdleLocalStorageDatabases;
+ (void)setStorageDatabaseIdleInterval:(double)arg1;
+ (id)sharedWebStorageManager;

- (void)deleteAllOrigins;
- (void)deleteOrigin:(id)arg1;
- (unsigned long long)diskUsageForOrigin:(id)arg1;
- (id)init;
- (id)origins;
- (void)syncFileSystemAndTrackerDatabase;
- (void)syncLocalStorage;

@end
