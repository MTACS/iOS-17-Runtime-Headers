
@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation

@property NSObject<PFUbiquityBaselineRecoveryOperationDelegate> *delegate;

- (id)delegate;
- (bool)isEqual:(id)arg1;
- (void)main;
- (id)retainedDelegate;
- (void)setDelegate:(id)arg1;

@end
