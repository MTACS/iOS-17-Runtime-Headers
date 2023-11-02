
@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation

@property NSObject<PFUbiquityBaselineRollResponseOperationDelegate> *delegate;

- (id)delegate;
- (void)main;
- (id)retainedDelegate;
- (void)setDelegate:(id)arg1;

@end
