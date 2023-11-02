
@protocol BLSHInactiveBudgetPolicing_Private <BLSHInactiveBudgetPolicing>

@required

- (long long)allowedFidelityAtDate:(NSDate *)arg1 forEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg2 expectedFidelity:(long long)arg3;
- (void)chargeRenderedSpecifier:(BLSHPresentationDateSpecifier *)arg1;
- (void)invalidateAtRequestDate:(void *)arg1 forEnvironment:(void *)arg2 invalidationBlock:(void *)arg3; // needs 3 arg types, found 7: NSDate *, <BLSHBacklightSceneHostEnvironment> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performInvalidation;
- (void)purgeStaleDataForNowDate:(NSDate *)arg1;
- (void)resetFutureSpecifiers;
- (BLSAlwaysOnDateSpecifier *)validateAndChargeFutureSpecifier:(BLSAlwaysOnDateSpecifier *)arg1 nextSpecifier:(BLSAlwaysOnDateSpecifier *)arg2 forEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg3;

@end
