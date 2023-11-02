
@interface APDatabaseManager : NSObject {
    struct sqlite3 { } * _database;
    APUnfairLock * _lock;
}

@property (nonatomic) struct sqlite3 { }*database;
@property (nonatomic, retain) APUnfairLock *lock;

+ (bool)_deviceUnlockedSinceBoot;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_bindParameters:(id)arg1 toStatement:(struct sqlite3_stmt { }*)arg2;
- (void)_closeConnectionAndDeleteDBWithName:(id)arg1;
- (id)_currentVersion;
- (bool)_executeQueryFromString:(id)arg1;
- (void)_openDBConnectionCanRepeat:(bool)arg1 dataBaseName:(id)arg2;
- (void)_registerForLockStateNotification;
- (void)_updateToVersion1;
- (bool)_updateVersion;
- (bool)_updateVersionToCurrent;
- (void)beginTransaction;
- (void)commitTransaction;
- (struct sqlite3 { }*)database;
- (long long)executeInsertQuery:(id)arg1 withParameters:(id)arg2;
- (bool)executeQuery:(id)arg1 withParameters:(id)arg2;
- (id)executeSelectQuery:(id)arg1 forClass:(Class)arg2 withParameters:(id)arg3;
- (id)executeSelectQuery:(id)arg1 forClass:(Class)arg2 withParameters:(id)arg3 groupedByColumn:(id)arg4;
- (id)executeSelectStringsQuery:(id)arg1 withParameters:(id)arg2;
- (id)init;
- (id)lock;
- (void)setDatabase:(struct sqlite3 { }*)arg1;
- (void)setLock:(id)arg1;
- (bool)setUp;

@end
