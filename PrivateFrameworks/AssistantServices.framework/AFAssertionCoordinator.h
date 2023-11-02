
@interface AFAssertionCoordinator : NSObject <AFInvalidating> {
    NSMutableSet * _activeAssertionUUIDs;
    NSMutableDictionary * _assertionsByUUID;
    <AFAssertionCoordinatorDelegate> * _delegate;
    NSString * _identifier;
    _Atomic long long  _numberOfActiveAssertions;
    _Atomic long long  _numberOfAssertions;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateAssertionWithUUID:(id)arg1;
- (void)_addAssertion:(id)arg1;
- (void)_deactivateAndRemoveAssertionWithUUID:(id)arg1 context:(id)arg2 error:(id)arg3 options:(unsigned long long)arg4;
- (void)_invalidate;
- (id)acquireRelinquishableAssertionWithContext:(id)arg1 relinquishmentHandler:(id /* block */)arg2;
- (void)barrier:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (void)getActiveAssertionsWithCompletion:(id /* block */)arg1;
- (void)getPendingAndActiveAssertionsWithCompletion:(id /* block */)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)invalidate;
- (unsigned long long)numberOfActiveAssertions;
- (unsigned long long)numberOfPendingAndActiveAssertions;
- (void)relinquishAsertionsPassingTest:(id /* block */)arg1 context:(id)arg2;
- (void)relinquishAsertionsPassingTest:(id /* block */)arg1 error:(id)arg2;
- (void)relinquishAssertionWithUUID:(id)arg1 context:(id)arg2 options:(unsigned long long)arg3;
- (void)relinquishAssertionWithUUID:(id)arg1 error:(id)arg2 options:(unsigned long long)arg3;

@end
