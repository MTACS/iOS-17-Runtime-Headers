
@interface HFCharacteristicValueCacheManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    NSObject<OS_dispatch_group> * _dispatchGroup;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _transactionsByActionSetID;
    NSMutableDictionary * _transactionsByCharacteristicID;
    NSMutableOrderedSet * _unprocessedAddedTransactions;
    NSMutableOrderedSet * _unprocessedRemovedTransactions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unprocessedTransctionLock;
}

@property (nonatomic, retain) NSMutableDictionary *transactionsByActionSetID;
@property (nonatomic, retain) NSMutableDictionary *transactionsByCharacteristicID;
@property (nonatomic, retain) NSMutableOrderedSet *unprocessedAddedTransactions;
@property (nonatomic, retain) NSMutableOrderedSet *unprocessedRemovedTransactions;

- (void).cxx_destruct;
- (void)_enumerateTransactionsRemovingFailingItems:(id)arg1 block:(id /* block */)arg2;
- (void)_locked_updateWithAddedTransaction:(id)arg1;
- (void)_locked_updateWithRemovedTransaction:(id)arg1;
- (id)_perfomUpdatedCacheRead:(id /* block */)arg1;
- (id)_performLock:(struct os_unfair_lock_s { unsigned int x1; }*)arg1 block:(id /* block */)arg2;
- (bool)_transaction:(id)arg1 isWritingCharacteristic:(id)arg2;
- (bool)_transaction:(id)arg1 isWritingCharacteristic:(id)arg2 allowingActions:(bool)arg3;
- (id)cachedValueForCharacteristic:(id)arg1;
- (bool)containsTransactionsExecutingActionSet:(id)arg1;
- (bool)containsTransactionsReadingCharacteristic:(id)arg1 filterBlock:(id /* block */)arg2;
- (bool)containsTransactionsWritingCharacteristic:(id)arg1;
- (id)init;
- (void)setTransactionsByActionSetID:(id)arg1;
- (void)setTransactionsByCharacteristicID:(id)arg1;
- (void)setUnprocessedAddedTransactions:(id)arg1;
- (void)setUnprocessedRemovedTransactions:(id)arg1;
- (void)transactionAdded:(id)arg1;
- (void)transactionRemoved:(id)arg1;
- (id)transactionsByActionSetID;
- (id)transactionsByCharacteristicID;
- (id)transactionsExecutingActionSet:(id)arg1;
- (id)transactionsReadingCharacteristic:(id)arg1 filterBlock:(id /* block */)arg2;
- (id)transactionsWritingCharacteristic:(id)arg1;
- (id)unprocessedAddedTransactions;
- (id)unprocessedRemovedTransactions;

@end
