
@interface PXAlertController : UIAlertController {
    UIActivityIndicatorView * _activityIndicatorView;
    UIView * _contentView;
    _PXAlertContentViewController * _contentViewController;
    UIProgressView * _progressView;
}

@property (nonatomic, retain) UIView *contentView;

+ (id)activityAlertControllerWithTitle:(id)arg1 cancelHandler:(id /* block */)arg2;
+ (id)activityAlertControllerWithTitle:(id)arg1 cancelHandler:(id /* block */)arg2 shouldDismiss:(bool)arg3;
+ (id)progressAlertControllerWithMessage:(id)arg1;

- (void).cxx_destruct;
- (id)contentView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setContentView:(id)arg1;
- (void)setProgress:(float)arg1 animated:(bool)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
