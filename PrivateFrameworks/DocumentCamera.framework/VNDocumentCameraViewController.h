
@interface VNDocumentCameraViewController : UIViewController {
    UIViewController * _childViewController;
    <VNDocumentCameraViewControllerDelegate> * _delegate;
}

@property (setter=setChildViewController:, nonatomic, retain) UIViewController *childViewController;
@property (nonatomic) <VNDocumentCameraViewControllerDelegate> *delegate;

+ (bool)isSupported;
+ (id)newDefaultViewController;
+ (id)newInProcessViewController;
+ (id)newViewServiceViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)childViewController;
- (id)delegate;
- (id)init;
- (id)initWithChildViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)prefersStatusBarHidden;
- (void)setChildViewController:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
