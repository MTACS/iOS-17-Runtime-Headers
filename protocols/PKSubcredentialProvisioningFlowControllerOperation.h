
@protocol PKSubcredentialProvisioningFlowControllerOperation <NSObject>

@required

- (<PKSubcredentialProvisioningFlowController> *)flowController;
- (id)initWithFlowController:(id <PKSubcredentialProvisioningFlowController>)arg1 context:(PKSubcredentialProvisioningFlowControllerContext *)arg2;

@optional

- (void)preflightWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
