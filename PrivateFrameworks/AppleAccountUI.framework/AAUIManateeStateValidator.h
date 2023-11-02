
@interface AAUIManateeStateValidator : NSObject {
    CDPContext * _context;
    CDPUIDeviceToDeviceEncryptionFlowContext * _flowContext;
    UIViewController * _presentingViewController;
}

@property (nonatomic, retain) CDPContext *context;

- (void).cxx_destruct;
- (id)context;
- (id)initWithFlowContext:(id)arg1 withPresentingViewController:(id)arg2;
- (void)repairIfPrimaryAppleAccountIsCDP:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)verifyAndRepairManateeWithCompletion:(id /* block */)arg1;

@end
