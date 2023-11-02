
@interface AMSUIDynamicViewControllerDelegateProxy : NSObject <AMSUIDynamicViewControllerDelegate> {
    <AMSUIDynamicViewControllerDelegate> * _delegate;
    AMSUIDynamicViewController * _dynamicViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSUIDynamicViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) AMSUIDynamicViewController *dynamicViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)dynamicViewController;
- (id)dynamicViewController:(id)arg1 contentViewControllerWithDictionary:(id)arg2;
- (id)dynamicViewController:(id)arg1 contentViewWithDictionary:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)dynamicViewController:(id)arg1 didFinishCarrierLinkingWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didResolveWithResult:(id)arg2 error:(id)arg3;
- (bool)dynamicViewController:(id)arg1 handleDelegateAction:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)dynamicViewControllerShouldDismiss:(id)arg1;
- (id)initWithDynamicViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDynamicViewController:(id)arg1;

@end
