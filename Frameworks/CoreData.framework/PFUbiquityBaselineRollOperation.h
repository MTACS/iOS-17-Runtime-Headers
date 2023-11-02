
@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {
    PFUbiquityBaselineHeuristics * _heuristics;
}

@property NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;

- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)main;
- (id)retainedDelegate;
- (void)setDelegate:(id)arg1;

@end
