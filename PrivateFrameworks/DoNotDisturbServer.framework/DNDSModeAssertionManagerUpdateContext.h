
@interface DNDSModeAssertionManagerUpdateContext : NSObject <DNDSModeAssertionUpdateContext> {
    DNDSClientDetailsProvider * _clientDetailsProvider;
    DNDSModeAssertionStore * _store;
    DNDSModeAssertionUpdateResult * _updateResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) DNDSModeAssertionStore *store;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) DNDSModeAssertionUpdateResult *updateResult;

- (void).cxx_destruct;
- (id)_calculateUpdateResultForStore:(id)arg1 previousStore:(id)arg2;
- (void)_cleanupStore:(inout id)arg1;
- (void)_resolveStore:(inout id)arg1;
- (id)initWithStore:(id)arg1 clientDetailsProvider:(id)arg2;
- (id)invalidateAssertionsForRequest:(id)arg1;
- (id)modeAssertionInvalidationsMatchingPredicate:(id)arg1;
- (id)modeAssertionsMatchingPredicate:(id)arg1;
- (id)store;
- (id)takeAssertionWithDetails:(id)arg1 source:(id)arg2 startDate:(id)arg3;
- (id)takeAssertionWithUUID:(id)arg1 details:(id)arg2 source:(id)arg3 startDate:(id)arg4;
- (id)updateResult;

@end
