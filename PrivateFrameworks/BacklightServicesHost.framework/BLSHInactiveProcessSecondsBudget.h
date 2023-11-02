
@interface BLSHInactiveProcessSecondsBudget : NSObject <BLSHInactiveProcessBudgeting> {
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BLSAlwaysOnDateSpecifier * _lock_exemptedSecondsFutureSpecifier;
    <BSTimerScheduleQuerying><BSInvalidatable> * _lock_invalidationTimer;
    NSDate * _lock_lastInvalidation;
    BLSAlwaysOnDateSpecifier * _lock_previousSecondsFutureSpecifier;
    BLSAlwaysOnDateSpecifier * _lock_previousSecondsRenderedSpecifier;
    <BLSHOSInterfaceProviding> * _osInterfaceProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)allowedFidelityAtDate:(id)arg1 expectedFidelity:(long long)arg2;
- (void)chargeRenderedSpecifier:(id)arg1 expectedFidelity:(long long)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(id)arg1 osInterfaceProvider:(id)arg2;
- (void)invalidateAtRequestDate:(id)arg1 expectedFidelity:(long long)arg2 invalidationBlock:(id /* block */)arg3;
- (void)performInvalidation;
- (void)resetFutureSpecifiers;
- (bool)stillTrackingAfterPurgingStaleDataForNowDate:(id)arg1;
- (id)validateAndChargeFutureSpecifier:(id)arg1 nextSpecifier:(id)arg2 expectedFidelity:(long long)arg3;

@end
