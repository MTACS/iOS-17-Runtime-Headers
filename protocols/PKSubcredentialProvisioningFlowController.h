
@protocol PKSubcredentialProvisioningFlowController <NSObject>

@required

- (id)initWithDelegate:(id <PKSubcredentialProvisioningFlowControllerDelegate>)arg1;
- (void)nextViewControllerFromProvisioningOperation:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: <PKSubcredentialProvisioningFlowControllerOperation> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)provisioningFinishedWithOperation:(id <PKSubcredentialProvisioningFlowControllerOperation>)arg1;
- (void)provisioningWasCanceledWithOperation:(id <PKSubcredentialProvisioningFlowControllerOperation>)arg1;

@end
