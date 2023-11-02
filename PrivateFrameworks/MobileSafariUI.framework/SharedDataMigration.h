
@interface SharedDataMigration : NSObject

+ (bool)_migrateCacheFileFromSubpath:(id)arg1 toSubpath:(id)arg2 ensureIsDirectory:(bool)arg3;
+ (id)_userCachesDirectoryPath;
+ (void)migratePersistentStorageDefaults;
+ (bool)migrateRecentSearches;
+ (void)migrateTabDatabaseIfNeeded;
+ (bool)migrateThumbnails;

@end
