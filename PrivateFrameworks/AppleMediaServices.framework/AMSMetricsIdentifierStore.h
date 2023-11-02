
@interface AMSMetricsIdentifierStore : NSObject {
    ACAccount * _account;
    AMSProcessInfo * _clientInfo;
    NSString * _domain;
    bool  _includeAccountMatchStatus;
    bool  _isActiveITunesAccountRequired;
    double  _resetInterval;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) bool includeAccountMatchStatus;
@property (nonatomic) bool isActiveITunesAccountRequired;
@property (nonatomic) double resetInterval;

+ (id)_accountIdentifierForAccount:(id)arg1;
+ (id)_database;
+ (id)_identifierStoreWithAccount:(id)arg1 parameters:(id)arg2;
+ (id)_parametersForBag:(id)arg1 bagNamespace:(id)arg2;
+ (id)_sharedQueue;
+ (id)_sync;
+ (void)cleanupIdentifiers;
+ (id)identifierForAccount:(id)arg1 bag:(id)arg2 bagNamespace:(id)arg3 keyName:(id)arg4;
+ (id)identifierStoreWithAccount:(id)arg1 bagNamespace:(id)arg2 bag:(id)arg3;
+ (void)removeIdentifiersForAccount:(id)arg1;

- (void).cxx_destruct;
- (id)_generateEventFieldsForKeys:(id)arg1 date:(id)arg2;
- (void)_generateFutureIdentifiersIfNeededForKeys:(id)arg1 storeInfo:(id)arg2 afterPeriod:(long long)arg3 inDatabase:(id)arg4 date:(id)arg5;
- (id)_generateIdentifierKey:(id)arg1 storeInfo:(id)arg2 period:(long long)arg3;
- (id)_generateStoreKey;
- (id)_identifierInfoForKey:(id)arg1 storeInfo:(id)arg2 period:(long long)arg3 inDatabase:(id)arg4 date:(id)arg5 setValue:(id)arg6 lastSyncDate:(id)arg7 needsToSync:(bool*)arg8 error:(id*)arg9;
- (id)_identifierStoreInfoForKeys:(id)arg1 inDatabase:(id)arg2 date:(id)arg3 needsToSync:(bool*)arg4 error:(id*)arg5;
- (id)_identifiersForKeys:(id)arg1 currentDate:(id)arg2;
- (void)_setIdentifier:(id)arg1 withStartedDate:(id)arg2 forKey:(id)arg3;
- (void)_setIdentifier:(id)arg1 withStartedDate:(id)arg2 lastSyncDate:(id)arg3 forKey:(id)arg4;
- (id)account;
- (id)clientInfo;
- (id)domain;
- (id)generateEventFieldsForKeys:(id)arg1;
- (id)generateEventFieldsForKeys:(id)arg1 date:(id)arg2;
- (id)identifierForKey:(id)arg1;
- (id)identifierIfExistsForKey:(id)arg1;
- (bool)includeAccountMatchStatus;
- (bool)isAccountValidForKey:(id)arg1 activeItunesAccountDSID:(inout id*)arg2;
- (bool)isActiveITunesAccountRequired;
- (void)reset;
- (double)resetInterval;
- (void)setAccount:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setIdentifier:(id)arg1 forKey:(id)arg2;
- (void)setIncludeAccountMatchStatus:(bool)arg1;
- (void)setIsActiveITunesAccountRequired:(bool)arg1;
- (void)setResetInterval:(double)arg1;

@end
