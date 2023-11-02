
@interface VSLoadingViewController_iOS : UIViewController <VSLoadingViewController> {
    bool  _cancellationAllowed;
    <VSLoadingViewControllerDelegate> * _delegate;
    bool  _isAnimating;
    UILabel * _label;
    UIActivityIndicatorView * _loadingIndicator;
}

@property (getter=isCancellationAllowed, nonatomic) bool cancellationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSLoadingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnimating;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic, retain) NSString *loadingTitle;
@property (readonly) Class superclass;

+ (id)defaultLoadingTitle;
+ (double)layoutSpacing;
+ (id)signingOutTitle;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isAnimating;
- (bool)isCancellationAllowed;
- (id)label;
- (id)loadingIndicator;
- (id)loadingTitle;
- (void)setCancellationAllowed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsAnimating:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLoadingIndicator:(id)arg1;
- (void)setLoadingTitle:(id)arg1;
- (void)updateAnimating;
- (void)viewDidLoad;

@end
