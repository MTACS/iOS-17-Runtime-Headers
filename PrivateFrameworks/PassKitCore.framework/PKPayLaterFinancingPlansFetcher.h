
@interface PKPayLaterFinancingPlansFetcher : NSObject <PKAccountServiceObserver> {
    PKAccountService * _accountService;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    PKPayLaterFinancingPlansFetcherRequest * _currentRequest;
    NSMutableArray * _dateRangeCompletions;
    PKCurrencyAmount * _fallbackAmount;
    NSCache * _financingPlanCache;
    bool  _hasDateRange;
    NSCache * _installmentMonthCache;
    NSArray * _months;
    NSDate * _newestDate;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSDate * _oldestDate;
    PKAccount * _payLaterAccount;
    NSMutableArray * _pendingRequests;
    NSObject<OS_dispatch_queue> * _replyQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _requestsLock;
    bool  _updatingDateRange;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKAccount *payLaterAccount;
@property (readonly) Class superclass;

+ (id)_financingPlanStates;

- (void).cxx_destruct;
- (void)_accessObserversWithHandler:(id /* block */)arg1;
- (void)_addRequest:(id)arg1;
- (void)_executeNextRequestIfPossible;
- (void)_executeRequest:(id)arg1;
- (void)_queue_clearAllCache;
- (void)_queue_clearCacheWithMonths:(id)arg1;
- (void)_queue_financingPlanUpdated:(id)arg1;
- (void)_timeZoneChanged;
- (void)accountChanged:(id)arg1;
- (void)accountFinancingPlanAdded:(id)arg1 accountIdentifier:(id)arg2;
- (void)accountFinancingPlanRemoved:(id)arg1 accountIdentifier:(id)arg2;
- (void)accountFinancingPlanUpdated:(id)arg1 oldFinancingPlan:(id)arg2 accountIdentifier:(id)arg3;
- (id)cachedInstallmentsMonthWithStartDate:(id)arg1;
- (void)dealloc;
- (void)financingPlansWithQueries:(id)arg1 completion:(id /* block */)arg2;
- (void)financingPlansWithQueryItems:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)initWithPayLaterAccount:(id)arg1;
- (void)installmentsMonthWithDate:(id)arg1 completion:(id /* block */)arg2;
- (id)monthDates;
- (id)payLaterAccount;
- (void)preflightDataIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)registerObserver:(id)arg1;
- (void)setPayLaterAccount:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
