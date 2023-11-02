
@interface CFXNonTransformedLiveCaptureContainerViewController : UIViewController {
    UIView * _liveCaptureContainer;
    UIView * _liveCaptureContainerContainer;
    CFXLiveCaptureViewController * _liveCaptureViewController;
}

@property (nonatomic, retain) UIView *liveCaptureContainer;
@property (nonatomic, retain) UIView *liveCaptureContainerContainer;
@property (nonatomic, readonly) CFXLiveCaptureViewController *liveCaptureViewController;

- (void).cxx_destruct;
- (id)liveCaptureContainer;
- (id)liveCaptureContainerContainer;
- (id)liveCaptureViewController;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)setLiveCaptureContainer:(id)arg1;
- (void)setLiveCaptureContainerContainer:(id)arg1;
- (void)viewDidLoad;

@end
