
@interface AMSCookieDatabase : NSObject <AMSSQLiteConnectionDelegate> {
    AMSSQLiteConnection * _connection;
    NSString * _dbPath;
}

@property (nonatomic, readonly) AMSSQLiteConnection *connection;
@property (nonatomic, readonly, copy) NSString *dbPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_cleanUpProtectionClassAtPath:(id)arg1 fileManager:(id)arg2;
+ (id)_dataVaultPathForIdentifier:(id)arg1 error:(id*)arg2;
+ (id)_databasePathForIdentifier:(id)arg1 error:(id*)arg2;
+ (id)_databasePathForIdentifiers:(id)arg1 fileManager:(id)arg2 error:(id*)arg3;
+ (id)cookieDatabaseForIdentifier:(id)arg1 error:(id*)arg2;
+ (id)cookieDatabaseForIdentifiers:(id)arg1 error:(id*)arg2;
+ (id)cookieDatabaseForIdentifiers:(id)arg1 error:(id*)arg2 fileManager:(id)arg3;
+ (id)databasePathForIdentifiers:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)_addCookieProperties:(id)arg1 error:(id*)arg2;
- (void)_bindCookieProperties:(id)arg1 column:(unsigned long long)arg2 position:(int)arg3 using:(id)arg4;
- (id)_cookieDictionaryForCursor:(id)arg1;
- (bool)_executeStatement:(id)arg1 columns:(id)arg2 forCookieProperties:(id)arg3 error:(id*)arg4;
- (bool)_removeCookieProperties:(id)arg1 error:(id*)arg2;
- (void)close;
- (id)connection;
- (bool)connectionNeedsResetForCorruption:(id)arg1;
- (id)cookiePropertiesWithError:(id*)arg1;
- (id)dbPath;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 path:(id)arg2;
- (bool)updateCookiesWithCookiePropertiesToAdd:(id)arg1 cookiePropertiesToRemove:(id)arg2 error:(id*)arg3;

@end
