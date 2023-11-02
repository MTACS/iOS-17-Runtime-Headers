
@interface DCDocumentCameraViewController : UIViewController {
    UIViewController * _childViewController;
    <DCDocumentCameraViewControllerDelegate> * _docCamDelegate;
}

@property (setter=setChildViewController:, nonatomic, retain) UIViewController *childViewController;
@property (nonatomic) <DCDocumentCameraViewControllerDelegate> *docCamDelegate;

+ (id)defaultViewControllerWithDelegate:(id)arg1;
+ (id)inProcessViewControllerWithDelegate:(id)arg1;
+ (bool)isAvailable;
+ (id)viewServiceViewControllerWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (id)childViewController;
- (id)docCamDelegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 childViewController:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setChildViewController:(id)arg1;
- (void)setDocCamDelegate:(id)arg1;

@end
