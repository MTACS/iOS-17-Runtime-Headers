
@interface CPLEngineWriteTransactionBlocker : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _unblock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUnblockBlock:(id /* block */)arg1;
- (void)unblock;

@end
