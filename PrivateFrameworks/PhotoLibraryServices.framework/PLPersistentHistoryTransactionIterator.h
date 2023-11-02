
@interface PLPersistentHistoryTransactionIterator : NSObject {
    NSManagedObjectContext * _context;
    unsigned long long  _count;
    NSPersistentHistoryToken * _lastIteratedToken;
    unsigned long long  _transactionIndex;
    NSArray * _transactions;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly, copy) NSPersistentHistoryToken *lastIteratedToken;
@property (nonatomic, retain) NSMutableDictionary *userInfo;

+ (id)iteratorSinceMarker:(id)arg1 withFetchRequest:(id)arg2 managedObjectObjectContext:(id)arg3 error:(id*)arg4;
+ (id)iteratorSinceToken:(id)arg1 withManagedObjectObjectContext:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_safeTransactionAtIndex:(unsigned long long)arg1;
- (id)context;
- (unsigned long long)count;
- (bool)enumerateOneTransactionWithBlock:(id /* block */)arg1;
- (void)enumerateRemainingTransactionsWithBlock:(id /* block */)arg1;
- (bool)hasMoreTransactions;
- (id)initWithTransactions:(id)arg1 managedObjectObjectContext:(id)arg2;
- (id)lastIteratedToken;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
