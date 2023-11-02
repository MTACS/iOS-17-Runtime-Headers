
@interface FigCaptureDeferredTransactionBroker : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct _recursiveTransaction { 
        NSObject<OS_os_transaction> *transaction; 
        unsigned int opens; 
    }  _openTransactions;
}

- (void)closeTransaction:(int)arg1;
- (void)exitImmediately;
- (id)init;
- (void)openTransaction:(int)arg1;
- (void)openTransaction:(int)arg1 pid:(int)arg2;

@end
