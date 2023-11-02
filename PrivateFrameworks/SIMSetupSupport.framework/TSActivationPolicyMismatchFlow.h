
@interface TSActivationPolicyMismatchFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    NSError * _planItemError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id)init;
- (id)initWithPlanItemError:(id)arg1;
- (id)nextViewControllerFrom:(id)arg1;

@end
