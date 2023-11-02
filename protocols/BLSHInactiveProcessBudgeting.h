
@protocol BLSHInactiveProcessBudgeting <NSObject>

@required

- (long long)allowedFidelityAtDate:(NSDate *)arg1 expectedFidelity:(long long)arg2;
- (void)chargeRenderedSpecifier:(BLSAlwaysOnDateSpecifier *)arg1 expectedFidelity:(long long)arg2;
- (void)invalidateAtRequestDate:(void *)arg1 expectedFidelity:(void *)arg2 invalidationBlock:(void *)arg3; // needs 3 arg types, found 7: NSDate *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performInvalidation;
- (void)resetFutureSpecifiers;
- (bool)stillTrackingAfterPurgingStaleDataForNowDate:(NSDate *)arg1;
- (BLSAlwaysOnDateSpecifier *)validateAndChargeFutureSpecifier:(BLSAlwaysOnDateSpecifier *)arg1 nextSpecifier:(BLSAlwaysOnDateSpecifier *)arg2 expectedFidelity:(long long)arg3;

@end
