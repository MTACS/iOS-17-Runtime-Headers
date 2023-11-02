
@interface CKSQLiteDatabaseActivities : CKSQLiteTable

+ (id)dbProperties;
+ (Class)entryClass;

- (id)activitiesStartingBeforeDate:(id)arg1;
- (id)deleteCompletedActivities;
- (id)deleteEntriesForDatabase:(id)arg1;
- (id)earliestActivityDate;
- (id)fetchActivityForTarget:(id)arg1;
- (bool)hasPendingActivities:(id*)arg1;
- (id)insertOrUpdateActivityDate:(id)arg1;
- (id)wakeFromDatabase;

@end
