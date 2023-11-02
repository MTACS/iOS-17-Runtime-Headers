
@interface NPKAssertionManager : NSObject {
    NSHashTable * _acquiredAssertions;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSHashTable *acquiredAssertions;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_errorWithUnderlyingError:(id)arg1;
- (void)_queue_acquireAssertionWithType:(unsigned long long)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_invalidateAssertionWithType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)acquireAssertionWithType:(unsigned long long)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (id)acquiredAssertionWithType:(unsigned long long)arg1;
- (id)acquiredAssertions;
- (void)addAssertion:(id)arg1;
- (bool)containsAssertionWithType:(unsigned long long)arg1;
- (id)init;
- (void)invalidateAssertionWithType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)removeAssertion:(id)arg1;
- (void)setAcquiredAssertions:(id)arg1;

@end
