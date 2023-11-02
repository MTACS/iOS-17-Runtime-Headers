
@interface WBSPasswordWarningManager : NSObject <WBSRemotePlistControllerDelegate> {
    WBSSavedAccountStore * _accountStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachedDataLock;
    NSArray * _cachedWarnings;
    NSMapTable * _cachedWarningsForSavedAccounts;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSSet * _historyHighLevelDomains;
    <WBSHistoricalHighLevelDomainsProvider> * _historyHighLevelDomainsProvider;
    WBSPasswordAuditor * _passwordAuditor;
    WBSPasswordBreachHelperProxy * _passwordBreachHelperProxy;
    WBSPasswordEvaluator * _passwordEvaluator;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _passwordEvaluatorLock;
    WBSPasswordWarningTopFraudTargetsManager * _topFraudTargetsManager;
    bool  _updateInProgress;
    NSUserDefaults * _userDefaults;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasUnacknowledgedHighPriorityWarnings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfNonHiddenWarningsWithSpecifiedPriority;
@property (nonatomic, readonly) WBSPasswordAuditor *passwordAuditor;
@property (nonatomic, readonly) WBSPasswordEvaluator *passwordEvaluator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getBreachResultRecordsForPasswords:(id)arg1 startSessionIfNecessary:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)_historyContainsItemForDomain:(id)arg1;
- (unsigned long long)_issuesForPassword:(id)arg1 withWeakPasswordEvaluation:(id)arg2 breachResultRecord:(id)arg3;
- (id)_passwordBreachHelperProxy;
- (long long)_scoreForSavedAccount:(id)arg1 issueTypes:(unsigned long long)arg2 topFraudTargets:(id)arg3 contextKitCategories:(long long)arg4;
- (void)_scoreWarnings:(id)arg1 contextKitCategoryMap:(id)arg2 topFraudTargets:(id)arg3;
- (id)_scoredWarningForSavedAccount:(id)arg1 topFraudTargets:(id)arg2 contextKitCategories:(long long)arg3 breachResultRecord:(id)arg4;
- (void)_sortWarningsBySeverity:(id)arg1 intoHighPriorityBucket:(id)arg2 intoStandardPriorityBucket:(id)arg3 unspecifiedSeverityBucket:(id)arg4 savedAccountMap:(id)arg5 highPriorityWarningHashes:(id)arg6;
- (void)_updateUserDefaultsWithWarningHashes:(id)arg1;
- (id)_warningForSavedAccount:(id)arg1 breachResultRecord:(id)arg2;
- (void)acknowledgeHighPriorityWarnings;
- (void)dealloc;
- (void)getAllWarningsForcingUpdate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)getWarningForSavedAccount:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasUnacknowledgedHighPriorityWarnings;
- (id)initWithSavedAccountStore:(id)arg1 autoFillQuirksManager:(id)arg2 userDefaults:(id)arg3 highLevelDomainsProvider:(id)arg4;
- (long long)numberOfNonHiddenWarningsWithSpecifiedPriority;
- (id)passwordAuditor;
- (id)passwordEvaluator;
- (void)preWarmWarningsWithCompletionHandler:(id /* block */)arg1;
- (void)removeWarningForSavedAccount:(id)arg1;
- (bool)savedAccountsFromGroup:(id)arg1 containsPasswordFromSavedAccount:(id)arg2;

@end
