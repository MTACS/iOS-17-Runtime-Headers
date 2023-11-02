
@protocol PFUbiquityBaselineRollResponseOperationDelegate <PFUbiquityBaselineRollOperationDelegate>

@required

- (void)rollResponseOperation:(PFUbiquityBaselineRollResponseOperation *)arg1 encounteredAnError:(NSError *)arg2 whileTryingToAdoptBaseline:(PFUbiquityBaseline *)arg3;
- (void)rollResponseOperation:(PFUbiquityBaselineRollResponseOperation *)arg1 successfullyAdoptedBaseline:(PFUbiquityBaseline *)arg2;

@end
