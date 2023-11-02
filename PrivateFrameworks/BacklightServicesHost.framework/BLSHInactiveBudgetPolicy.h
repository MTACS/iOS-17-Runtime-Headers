
@interface BLSHInactiveBudgetPolicy : NSObject <BLSHInactiveBudgetPolicing_Private> {
    id /* block */  _budgetFactory;
    NSMutableDictionary * _budgets;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BLSHNullInactiveProcessBudget * _nullBudget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)allowedFidelityAtDate:(id)arg1 forEnvironment:(id)arg2 expectedFidelity:(long long)arg3;
- (void)chargeRenderedSpecifier:(id)arg1;
- (id)description;
- (id)initWithBudgetFactory:(id /* block */)arg1;
- (id)initWithOSInterfaceProvider:(id)arg1;
- (void)invalidateAtRequestDate:(id)arg1 forEnvironment:(id)arg2 invalidationBlock:(id /* block */)arg3;
- (void)performInvalidation;
- (void)purgeStaleDataForNowDate:(id)arg1;
- (void)resetBudgetForProcess:(id)arg1 reason:(id)arg2;
- (void)resetFutureSpecifiers;
- (id)validateAndChargeFutureSpecifier:(id)arg1 nextSpecifier:(id)arg2 forEnvironment:(id)arg3;

@end
