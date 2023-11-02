
@interface BLSHInactiveProcessMinutesBudget : NSObject <BLSHInactiveProcessBudgeting> {
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _lock_buckets;
    <BSTimerScheduleQuerying><BSInvalidatable> * _lock_invalidationTimer;
    unsigned long long  _lock_lastInvalidationTimestamp;
    <BLSHOSInterfaceProviding> * _osInterfaceProvider;
}

@property (nonatomic, readonly) unsigned long long bucketCount;
@property (nonatomic, readonly, copy) NSArray *buckets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long secondsBucketCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)allowedFidelityAtDate:(id)arg1 expectedFidelity:(long long)arg2;
- (unsigned long long)bucketCount;
- (id)buckets;
- (void)chargeRenderedSpecifier:(id)arg1 expectedFidelity:(long long)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (bool)hasSecondsBudgetAtDate:(id)arg1;
- (id)initWithIdentifier:(id)arg1 osInterfaceProvider:(id)arg2;
- (void)invalidateAtRequestDate:(id)arg1 expectedFidelity:(long long)arg2 invalidationBlock:(id /* block */)arg3;
- (void)performInvalidation;
- (void)resetFutureSpecifiers;
- (unsigned long long)secondsBucketCount;
- (bool)stillTrackingAfterPurgingStaleDataForNowDate:(id)arg1;
- (id)validateAndChargeFutureSpecifier:(id)arg1 nextSpecifier:(id)arg2 expectedFidelity:(long long)arg3;

@end
