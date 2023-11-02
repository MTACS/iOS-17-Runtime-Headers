
@interface PKLoadingViewController : UIViewController {
    <PKLoadingViewControllerDelegate> * _delegate;
    UILabel * _loadingLabel;
    UIActivityIndicatorView * _spinner;
}

- (void).cxx_destruct;
- (void)_cancelButtonTapped:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
