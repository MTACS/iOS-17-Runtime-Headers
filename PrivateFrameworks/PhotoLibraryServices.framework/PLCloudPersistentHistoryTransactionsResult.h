
@interface PLCloudPersistentHistoryTransactionsResult : NSObject <PLCloudChangeEventsResult> {
    NSString * _currentTokenDescription;
    id /* block */  _isTransactionSyncableFilter;
    NSPersistentHistoryToken * _lastProcessedCoreDataToken;
    long long  _resultType;
    PLPersistentHistoryTransactionIterator * _transactionIterator;
    NSArray * _transactions;
}

@property (readonly, copy) NSString *currentTokenDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSPersistentHistoryToken *lastProcessedCoreDataToken;
@property (readonly) long long resultType;
@property (readonly) Class superclass;

+ (id /* block */)_isTransactionNonCoalescingFilter;
+ (id /* block */)_isTransactionSyncableFilter;
+ (id)fetchTransactionsSinceToken:(id)arg1 inContext:(id)arg2;

- (void).cxx_destruct;
- (id)_nextLocalEventUpToNonCoalescableTransaction;
- (void)_sendLocalEvent:(id)arg1 toEnumerationBlock:(id /* block */)arg2;
- (void)_updateLastProcessedCoreDataToken;
- (id)currentTokenDescription;
- (void)enumerateLocalEventsWithBlock:(id /* block */)arg1;
- (id)initWithResultType:(long long)arg1 transactionIterator:(id)arg2;
- (id)initWithSuccesfulTransactionIterator:(id)arg1;
- (id)initWithUnsuccessfulResultType:(long long)arg1;
- (id)lastProcessedCoreDataToken;
- (long long)resultType;

@end
