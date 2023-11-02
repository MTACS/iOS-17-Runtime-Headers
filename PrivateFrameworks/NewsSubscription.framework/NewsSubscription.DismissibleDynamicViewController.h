
@interface NewsSubscription.DismissibleDynamicViewController : UINavigationController <UIAdaptivePresentationControllerDelegate> {
    void dismissDelegate;
    void identifier;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;

@end
