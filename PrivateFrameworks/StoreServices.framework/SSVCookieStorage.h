
@interface SSVCookieStorage : NSObject {
    SSSQLiteDatabase * __database;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _performingMigration;
    NSURL * _storageLocation;
    bool  _usesSharedCookieDatabase;
}

@property (nonatomic, readonly) SSSQLiteDatabase *_database;
@property (nonatomic) bool performingMigration;
@property (readonly) NSURL *storageLocation;

+ (bool)_bindStatement:(struct sqlite3_stmt { }*)arg1 withValues:(id)arg2;
+ (bool)_currentProcessIsRoot;
+ (bool)_currentProcessShouldUseRescuedStorageLocationForLocation:(id)arg1;
+ (bool)_fileIsOwnedByRoot:(id)arg1;
+ (bool)_fileURLRepresentsSharedStorageLocation:(id)arg1;
+ (id)_getGlobalSetCookiesForResponse:(id)arg1;
+ (id)_getSetCookiesForResponse:(id)arg1;
+ (id)_getUserSetCookiesForResponse:(id)arg1;
+ (bool)_migrateToVersion1WithDatabase:(id)arg1;
+ (bool)_migrateToVersion2WithDatabase:(id)arg1;
+ (id)_rescuedStorageLocationForLocation:(id)arg1;
+ (bool)_setupCookieDatabase:(id)arg1 forCookieStorage:(id)arg2;
+ (id)_sharedStorageLocationPath;
+ (bool)responseHasSetCookies:(id)arg1;
+ (id)sharedInstance;
+ (id)sharedStorage;

- (void).cxx_destruct;
- (id)_accountForKey:(id)arg1;
- (id)_allCookieKeys;
- (void)_bindInsertStatement:(struct sqlite3_stmt { }*)arg1 forCookie:(id)arg2 key:(id)arg3;
- (id)_columnNameForCookieProperty:(id)arg1;
- (void)_cookieDatabaseDidChange;
- (id)_copyCookieDictionaryForURL:(id)arg1 key:(id)arg2;
- (id)_copyCookieObjectsForURL:(id)arg1 key:(id)arg2;
- (id)_copyCookiesForPreparedSQLStatement:(struct sqlite3_stmt { }*)arg1;
- (id)_copyCookiesWithKey:(id)arg1;
- (id)_copyPrivateCookieObjectsForURL:(id)arg1 key:(id)arg2;
- (id)_copyPrivateCookiesForURL:(id)arg1 key:(id)arg2;
- (id)_database;
- (id)_filterCookies:(id)arg1 forURL:(id)arg2;
- (void)_handleSharedCookieDatabaseDidChangeDarwinNotification;
- (void)_insertCookies:(id)arg1 forKey:(id)arg2;
- (void)_setCookies:(id)arg1 forKey:(id)arg2;
- (bool)_shouldAddITFECookieToURL:(id)arg1;
- (bool)_stopIncludingLocalCookies;
- (id)allCookiesForAccount:(id)arg1;
- (id)allCookiesForUserIdentifier:(id)arg1;
- (id)allCookiesForUserIdentifier:(id)arg1 scope:(long long)arg2;
- (id)cookieArrayBySettingFeatureEnablerWithArray:(id)arg1 key:(id)arg2;
- (id)cookieHeadersForURL:(id)arg1 account:(id)arg2;
- (id)cookieHeadersForURL:(id)arg1 userIdentifier:(id)arg2;
- (id)cookieHeadersForURL:(id)arg1 userIdentifier:(id)arg2 scope:(long long)arg3;
- (id)cookiesForURL:(id)arg1 account:(id)arg2;
- (id)cookiesForURL:(id)arg1 userIdentifier:(id)arg2;
- (id)cookiesForURL:(id)arg1 userIdentifier:(id)arg2 scope:(long long)arg3;
- (void)dealloc;
- (id)fetchDefaults;
- (id)init;
- (id)initWithStorageLocation:(id)arg1;
- (bool)performingMigration;
- (void)removeAllCookies;
- (void)removeCookiesWithAccount:(id)arg1;
- (void)removeCookiesWithProperties:(id)arg1;
- (void)removeCookiesWithUserIdentifier:(id)arg1;
- (void)removeCookiesWithUserIdentifier:(id)arg1 scope:(long long)arg2;
- (void)setCookies:(id)arg1 forAccount:(id)arg2;
- (void)setCookies:(id)arg1 forUserIdentifier:(id)arg2;
- (void)setCookiesForHTTPResponse:(id)arg1 account:(id)arg2;
- (void)setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2;
- (void)setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2 scope:(long long)arg3;
- (void)setCookiesFromCookieStorage:(id)arg1;
- (void)setFeatureEnablerInDictionary:(id)arg1 key:(id)arg2;
- (void)setPerformingMigration:(bool)arg1;
- (id)storageLocation;
- (void)synchronizeCookies;
- (void)synchronizeFeatureEnablerCookieWithCookieValue:(id)arg1 key:(id)arg2 result:(id /* block */)arg3;

@end
