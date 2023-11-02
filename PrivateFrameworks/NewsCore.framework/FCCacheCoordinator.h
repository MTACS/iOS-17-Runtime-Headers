
@interface FCCacheCoordinator : NSObject <FCOperationThrottlerDelegate> {
    FCThreadSafeMutableDictionary * _cacheHintsByKey;
    <FCCacheCoordinatorDelegate> * _delegate;
    FCCacheCoordinatorFlushPolicy * _flushPolicy;
    <FCOperationThrottler> * _flushThrottler;
    bool  _flushingEnabled;
    NFUnfairLock * _interestLock;
    NSCountedSet * _interestedKeys;
    NSMutableSet * _storedKeys;
    <FCCacheCoordinatorLocking> * _underlyingLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCCacheCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *keysWithNonZeroInterest;
@property (nonatomic, readonly) NSSet *keysWithZeroInterest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)cacheContainsKey:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didInsertKeyIntoCache:(id)arg1;
- (void)didInsertKeyIntoCache:(id)arg1 withLifetimeHint:(long long)arg2;
- (void)didInsertKeysIntoCache:(id)arg1 withLifetimeHints:(id)arg2;
- (void)didRemoveKeysFromCache:(id)arg1;
- (void)enableFlushingWithPolicy:(id)arg1;
- (id)holdTokenForKey:(id)arg1;
- (id)holdTokenForKeys:(id)arg1;
- (id)holdTokensForKeys:(id)arg1;
- (id)init;
- (id)keysWithNonZeroInterest;
- (id)keysWithZeroInterest;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)performCacheRead:(id /* block */)arg1;
- (void)performCacheWrite:(id /* block */)arg1;
- (id)persistableHints;
- (void)setDelegate:(id)arg1;
- (void)setupWithInitialKeys:(id)arg1;
- (void)setupWithInitialKeys:(id)arg1 persistedHints:(id)arg2;

@end
