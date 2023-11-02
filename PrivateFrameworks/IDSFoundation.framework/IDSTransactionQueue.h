
@interface IDSTransactionQueue : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _transactions;
}

@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSMutableArray *transactions;

- (void).cxx_destruct;
- (void)_appendTransaction:(id)arg1;
- (void)_prependTransaction:(id)arg1;
- (void)_readyTransaction:(id)arg1;
- (void)_removeTransaction:(id)arg1;
- (void)appendItem:(id)arg1;
- (id /* block */)appendPendingItem:(id)arg1;
- (void)executeReadyItemsWithBlock:(id /* block */)arg1;
- (id)init;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)prependItem:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setTransactions:(id)arg1;
- (id)transactions;

@end
