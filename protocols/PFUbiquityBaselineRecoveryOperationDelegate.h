
@protocol PFUbiquityBaselineRecoveryOperationDelegate <NSObject>

@required

- (void)recoveryOperation:(PFUbiquityBaselineRecoveryOperation *)arg1 didReplaceLocalStoreFileWithBaseline:(PFUbiquityBaseline *)arg2;
- (void)recoveryOperation:(PFUbiquityBaselineRecoveryOperation *)arg1 encounteredAnError:(NSError *)arg2 duringRecoveryOfBaseline:(PFUbiquityBaseline *)arg3;

@end
