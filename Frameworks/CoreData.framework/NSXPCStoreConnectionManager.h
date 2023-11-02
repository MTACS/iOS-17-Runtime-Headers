
@interface NSXPCStoreConnectionManager : NSObject {
    NSMutableArray * _allConnections;
    NSMutableArray * _availableConnections;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    unsigned long long  _maxConnections;
    NSObject<OS_dispatch_semaphore> * _poolCounter;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

- (void)dealloc;
- (id)initForStore:(id)arg1;

@end
