
@interface PKMerchantTokenLoadingView : UIView {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _label;
    UIStackView * _stackView;
}

@property (nonatomic, copy) NSString *loadingText;

- (void).cxx_destruct;
- (void)_setUpActivityIndicator;
- (void)_setUpConstraints;
- (void)_setUpLabel;
- (void)_setUpSelf;
- (void)_setUpStackView;
- (void)_setUpViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)loadingText;
- (void)setLoadingText:(id)arg1;

@end
