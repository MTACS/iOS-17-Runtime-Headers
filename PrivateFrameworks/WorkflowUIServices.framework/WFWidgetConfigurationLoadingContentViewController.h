
@interface WFWidgetConfigurationLoadingContentViewController : UIViewController {
    UIView * _currentContentView;
}

@property (nonatomic, retain) UIView *currentContentView;

- (void).cxx_destruct;
- (id)currentContentView;
- (void)setCurrentContentView:(id)arg1;
- (void)showMessage:(id)arg1;
- (void)startLoading;
- (void)viewDidLoad;

@end
