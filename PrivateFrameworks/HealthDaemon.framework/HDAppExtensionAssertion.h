
@interface HDAppExtensionAssertion : NSObject {
    NSString * _bundleIdentifier;
    long long  _connectionErrorCount;
    <HDAppExtensionAssertionDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _graceTimer;
    bool  _invalidated;
    double  _lastAssertionAttempt;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _pendingAssertion;
    NSMutableDictionary * _pendingAssertionCompletions;
    NSMutableDictionary * _pendingDataTypeCodesToAnchors;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    id /* block */  _unitTest_errorCountDidIncrement;
    id /* block */  _unitTest_extensionWillTimeout;
    bool  _unitTest_timersWithShortTimeout;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic) <HDAppExtensionAssertionDelegate> *delegate;
@property (nonatomic, readonly) double nextAssertionAttempt;
@property (nonatomic, readonly) bool shouldAssert;
@property (nonatomic, copy) id /* block */ unitTest_errorCountDidIncrement;
@property (nonatomic, copy) id /* block */ unitTest_extensionWillTimeout;
@property (nonatomic) bool unitTest_timersWithShortTimeout;

- (void).cxx_destruct;
- (long long)_unitTest_connectionErrorCount;
- (bool)_unitTest_invalidated;
- (double)_unitTest_lastAssertionAttempt;
- (unsigned long long)_unitTest_pendingAssertionCompletionsCount;
- (id)_unitTest_pendingDataTypeCodesToAnchors;
- (void)assertAndUpdateWithCompletion:(id /* block */)arg1;
- (id)bundleIdentifier;
- (id)delegate;
- (void)extendForDataType:(long long)arg1 anchor:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 profile:(id)arg2 queue:(id)arg3;
- (void)invalidateForDataType:(long long)arg1 anchor:(id)arg2;
- (double)nextAssertionAttempt;
- (void)setDelegate:(id)arg1;
- (void)setUnitTest_errorCountDidIncrement:(id /* block */)arg1;
- (void)setUnitTest_extensionWillTimeout:(id /* block */)arg1;
- (void)setUnitTest_timersWithShortTimeout:(bool)arg1;
- (bool)shouldAssert;
- (id /* block */)unitTest_errorCountDidIncrement;
- (id /* block */)unitTest_extensionWillTimeout;
- (bool)unitTest_timersWithShortTimeout;

@end
