
@protocol PFUbiquityBaselineRollOperationDelegate <NSObject>

@required

- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(PFUbiquityBaselineRollOperation *)arg1;
- (void)baselineRollOperationWasUnableToLockPersistentStore:(PFUbiquityBaselineRollOperation *)arg1;

@end
