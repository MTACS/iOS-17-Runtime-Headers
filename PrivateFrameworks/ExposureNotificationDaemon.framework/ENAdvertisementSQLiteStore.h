
@interface ENAdvertisementSQLiteStore : NSObject {
    struct sqlite3 { } * _database;
    NSString * _databasePath;
    struct sqlite3_stmt {} ** _preparedStatements;
    NSNumber * _storedAdvertisementCount;
}

@property (nonatomic, retain) NSString *databasePath;
@property (nonatomic, readonly) NSNumber *storedAdvertisementCount;

+ (struct { struct { unsigned char x_1_1_1[16]; } x1; struct { unsigned char x_2_1_1[4]; } x2; double x3; unsigned int x4; unsigned short x5; unsigned short x6; BOOL x7; BOOL x8; bool x9; unsigned char x10; })advertisementForSQLiteStatement:(struct sqlite3_stmt { }*)arg1;
+ (id)centralStoreInFolderPath:(id)arg1 error:(id*)arg2;
+ (void)enumerateTemporaryStoresInFolderPath:(id)arg1 handler:(id /* block */)arg2;
+ (id)errorForSQLiteResult:(int)arg1;
+ (bool)isCentralStore:(id)arg1;
+ (bool)isStore:(id)arg1;
+ (bool)isTemporaryStore:(id)arg1;
+ (bool)removeAllDatabaseFilesWithDatabasePath:(id)arg1;
+ (bool)removeAllStoresFromDiskWithFolderPath:(id)arg1;
+ (bool)removeAllTemporaryStoresFromDiskWithFolderPath:(id)arg1 lastModifiedBeforeDate:(id)arg2;
+ (id)statementStringForStatementType:(unsigned long long)arg1;
+ (id)storePathsInFolderPath:(id)arg1;
+ (bool)storesPresentInFolderPath:(id)arg1;
+ (id)temporaryStoreInFolderPath:(id)arg1 error:(id*)arg2;
+ (id)temporaryStorePathsInFolderPath:(id)arg1;
+ (id)temporaryStoresInFolderPath:(id)arg1;
+ (bool)temporaryStoresPresentInFolderPath:(id)arg1;

- (void).cxx_destruct;
- (id)beaconCountMetricsWithStartDate:(id)arg1 endDate:(id)arg2 windowDuration:(double)arg3;
- (int)beginDatabaseTransaction;
- (int)bindAdvertisement:(struct { struct { unsigned char x_1_1_1[16]; } x1; struct { unsigned char x_2_1_1[4]; } x2; double x3; unsigned int x4; unsigned short x5; unsigned short x6; BOOL x7; BOOL x8; bool x9; unsigned char x10; })arg1 toSQLiteStatement:(struct sqlite3_stmt { }*)arg2;
- (int)bindRPIBuffer:(const void*)arg1 count:(unsigned long long)arg2 validityBuffer:(const void*)arg3 validRPICount:(unsigned long long)arg4 toSQLiteStatement:(struct sqlite3_stmt { }*)arg5;
- (int)checkpointWAL;
- (bool)cloneStoreTo:(id)arg1;
- (int)closeDatabase;
- (int)configureDatabase;
- (bool)connectToDatabaseAndReturnError:(id*)arg1;
- (id)databasePath;
- (void)dealloc;
- (void)disconnectFromDatabase;
- (int)endDatabaseTransaction;
- (int)enumerateAdvertisments:(id /* block */)arg1;
- (void)enumeratePreparedStatements:(id /* block */)arg1;
- (unsigned long long)getAdvertisementsMatchingRPIBuffer:(const void*)arg1 count:(unsigned long long)arg2 validityBuffer:(const void*)arg3 validRPICount:(unsigned long long)arg4 matchingAdvertisementBuffer:(struct { /* ? */ }**)arg5 error:(id*)arg6;
- (bool)importContentsOfStore:(id)arg1 error:(id*)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (int)initializeAdvertisementTable;
- (int)initializePreparedStatements;
- (int)initializeRPIBufferModule;
- (int)migrateDatabase;
- (int)migrateFromVersion:(int)arg1;
- (int)openDatabase;
- (struct sqlite3_stmt { }*)preparedStatementOfType:(unsigned long long)arg1;
- (bool)purgeAdvertismentsRecordedPriorToDate:(id)arg1 error:(id*)arg2;
- (bool)purgeAndRemoveFromDisk:(bool)arg1;
- (id)queryFilterWithBufferSize:(unsigned long long)arg1 hashCount:(unsigned long long)arg2 attenuationThreshold:(unsigned char)arg3;
- (bool)refreshStoredAdvertismentCountWithError:(id*)arg1;
- (int)rollbackDatabaseTransaction;
- (bool)saveContactTracingAdvertisementBuffer:(struct { struct { unsigned char x_1_1_1[16]; } x1; struct { unsigned char x_2_1_1[4]; } x2; double x3; unsigned int x4; unsigned short x5; unsigned short x6; BOOL x7; BOOL x8; bool x9; unsigned char x10; }*)arg1 count:(unsigned long long)arg2 error:(id*)arg3;
- (void)setDatabasePath:(id)arg1;
- (int)setVersionCurrent;
- (id)storedAdvertisementCount;
- (bool)transactionNeededForMigrationFromVersion:(int)arg1;

@end
