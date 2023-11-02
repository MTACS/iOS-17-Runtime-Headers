
@interface AMSUILoadingView : AMSUICommonView {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _label;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UILabel *label;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (void)setActivityIndicator:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLoadingText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAnimating;
- (void)stopAnimating;

@end
