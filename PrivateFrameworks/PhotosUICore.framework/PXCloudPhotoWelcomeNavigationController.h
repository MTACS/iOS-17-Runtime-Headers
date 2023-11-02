
@interface PXCloudPhotoWelcomeNavigationController : UINavigationController {
    <PXCloudPhotoWelcomeNavigationControllerDismissDelegate> * _dismissDelegate;
}

@property (nonatomic) <PXCloudPhotoWelcomeNavigationControllerDismissDelegate> *dismissDelegate;

+ (id)new;
+ (bool)shouldPresentWelcomeViewController:(bool*)arg1;

- (void).cxx_destruct;
- (id)dismissDelegate;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithWelcomeController:(id)arg1;
- (void)setDismissDelegate:(id)arg1;

@end
