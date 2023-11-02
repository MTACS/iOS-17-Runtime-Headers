
@interface BLSHNullInactiveProcessBudget : NSObject <BLSHInactiveProcessBudgeting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)allowedFidelityAtDate:(id)arg1 expectedFidelity:(long long)arg2;
- (void)chargeRenderedSpecifier:(id)arg1 expectedFidelity:(long long)arg2;
- (void)invalidateAtRequestDate:(id)arg1 expectedFidelity:(long long)arg2 invalidationBlock:(id /* block */)arg3;
- (void)performInvalidation;
- (void)resetFutureSpecifiers;
- (bool)stillTrackingAfterPurgingStaleDataForNowDate:(id)arg1;
- (id)validateAndChargeFutureSpecifier:(id)arg1 nextSpecifier:(id)arg2 expectedFidelity:(long long)arg3;

@end
