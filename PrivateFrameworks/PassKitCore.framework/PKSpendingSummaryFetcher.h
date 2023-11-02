
@interface PKSpendingSummaryFetcher : NSObject <PKAccountServiceObserver, PKPaymentDataProviderDelegate> {
    PKAccount * _account;
    NSMutableDictionary * _blockPendingRequests;
    NSCalendar * _currentCalendar;
    NSCache * _monthlySummaryItemsPerStartDate;
    NSDate * _newestTransactionDate;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSDate * _oldestTransactionDate;
    PKPaymentDefaultDataProvider * _paymentDataProvider;
    NSMutableOrderedSet * _pendingRequests;
    bool  _processingRequest;
    NSObject<OS_dispatch_queue> * _replyQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _requestsLock;
    FHSearchSuggestionController * _searchSuggestionController;
    NSArray * _statements;
    PKTransactionSourceCollection * _transactionSourceCollection;
    NSCache * _weeklySummaryItemsPerStartDate;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSCache * _yearlySummaryItemsPerStartDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_sortedTransactions:(id)arg1 ascending:(bool)arg2;
+ (id)_spendingCategoriesFromTransactions:(id)arg1 currencyCode:(id)arg2;
+ (id)_spendingMerchantsFromTransaction:(id)arg1 currencyCode:(id)arg2;
+ (id)_summaryWithTransactions:(id)arg1 currency:(id)arg2 type:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 lastSummary:(id)arg6;
+ (id)nextStartOfWeekFromDate:(id)arg1;
+ (id)previousStartOfWeekFromDate:(id)arg1;
+ (id)summaryWithTransactions:(id)arg1 transactionSourceCollection:(id)arg2 currency:(id)arg3 type:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 lastSummary:(id)arg7;

- (void).cxx_destruct;
- (void)_accessObserversWithHandler:(id /* block */)arg1;
- (id)_cacheForType:(unsigned long long)arg1;
- (id)_cachedSpendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 withLastPeriodChange:(bool)arg3;
- (void)_processNextRequest;
- (void)_resetCurrentCalendar;
- (void)_spendingSummaryStartingWithDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 withLastPeriodChange:(bool)arg4 completion:(id /* block */)arg5;
- (void)_timeZoneChanged:(id)arg1;
- (void)availableSummaries:(id /* block */)arg1;
- (id)cachedSpendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithTransactionSourceCollection:(id)arg1 account:(id)arg2;
- (void)registerObserver:(id)arg1;
- (void)spendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 includingLastPeriodChange:(bool)arg3 completion:(id /* block */)arg4;
- (void)statementsChangedForAccountIdentifier:(id)arg1;
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)unregisterObserver:(id)arg1;

@end
