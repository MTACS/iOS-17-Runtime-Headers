
@interface WebDatabaseManager : NSObject

+ (void)removeEmptyDatabaseFiles;
+ (void)scheduleEmptyDatabaseRemoval;
+ (id)sharedWebDatabaseManager;

- (id)databasesWithOrigin:(id)arg1;
- (void)deleteAllDatabases;
- (void)deleteAllIndexedDatabases;
- (bool)deleteDatabase:(id)arg1 withOrigin:(id)arg2;
- (bool)deleteOrigin:(id)arg1;
- (id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2;
- (id)init;
- (id)origins;

@end
