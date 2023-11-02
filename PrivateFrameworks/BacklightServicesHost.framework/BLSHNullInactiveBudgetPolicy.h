
@interface BLSHNullInactiveBudgetPolicy : NSObject <BLSHInactiveBudgetPolicing_Private>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)allowedFidelityAtDate:(id)arg1 forEnvironment:(id)arg2 expectedFidelity:(long long)arg3;
- (void)chargeRenderedSpecifier:(id)arg1;
- (void)invalidateAtRequestDate:(id)arg1 forEnvironment:(id)arg2 invalidationBlock:(id /* block */)arg3;
- (void)performInvalidation;
- (void)purgeStaleDataForNowDate:(id)arg1;
- (void)resetBudgetForProcess:(id)arg1 reason:(id)arg2;
- (void)resetFutureSpecifiers;
- (id)validateAndChargeFutureSpecifier:(id)arg1 nextSpecifier:(id)arg2 forEnvironment:(id)arg3;

@end
