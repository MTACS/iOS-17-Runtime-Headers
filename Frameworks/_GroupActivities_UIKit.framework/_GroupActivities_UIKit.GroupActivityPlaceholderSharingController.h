
@interface _GroupActivities_UIKit.GroupActivityPlaceholderSharingController : UINavigationController <_EXHostViewControllerDelegate> {
    void placeholderControllerDidCancel;
    void rootViewController;
}

- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)arg1;
- (void)hostViewController:(id)arg1 didEndHosting:(id)arg2 error:(id)arg3;
- (void)hostViewController:(id)arg1 didFailToHost:(id)arg2 error:(id)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
