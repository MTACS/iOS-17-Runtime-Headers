
@interface WBSPasswordBreachManager : NSObject {
    WBSPasswordBreachQueuedPasswordBagManager * _bagManager;
    WBSPasswordBreachChecker * _checker;
    WBSPasswordBreachContext * _context;
    <WBSPasswordBreachCredentialSource> * _credentialSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    WBSPasswordBreachResults * _results;
    NSObject<OS_os_transaction> * _sessionTransaction;
}

+ (void)_getStandardContextWithCompletionHandler:(id /* block */)arg1;
+ (void)getSharedManagerWithCompletionHandler:(id /* block */)arg1;
+ (bool)isPasswordBreachDetectionOn;
+ (void)setPasswordBreachDetectionOn:(bool)arg1;
+ (id)testableManagerWithTestCredentialSource:(id)arg1 store:(id)arg2 configuration:(id)arg3;

- (void).cxx_destruct;
- (void)_addRecentlyBreachedNotificationIfNecessaryWithCompletionHandler:(id /* block */)arg1;
- (bool)_canPerformSessionIgnoringMinimumDelay:(bool)arg1;
- (id)_checker;
- (void)_completeSessionWithResults:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_showActiveWarningsIfNecessaryWithInitialBagFillState:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)addResultRecords:(id)arg1;
- (void)clearAllRecordsWithCompletionHandler:(id /* block */)arg1;
- (void)clearRecentlyBreachedResultRecords;
- (id)initWithContext:(id)arg1 credentialSource:(id)arg2;
- (void)performNextSessionLookupIgnoringMinimumDelay:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)recentlyBreachedResultRecords;
- (id)recentlyBreachedSavedAccounts;
- (id)resultRecordsForQueries:(id)arg1;

@end
