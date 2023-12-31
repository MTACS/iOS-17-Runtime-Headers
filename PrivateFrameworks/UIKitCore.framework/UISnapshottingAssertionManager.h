
@interface UISnapshottingAssertionManager : NSObject {
    NSMutableSet * _heldAssertions;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)acquireNewAssertion;
- (void)dealloc;
- (void)executeIfNoActiveAssertions:(id /* block */)arg1;
- (id)init;
- (void)relinquishAssertion:(id)arg1;
- (void)withLock:(id /* block */)arg1;

@end
