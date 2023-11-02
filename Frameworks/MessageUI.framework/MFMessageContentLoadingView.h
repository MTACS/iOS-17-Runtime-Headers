
@interface MFMessageContentLoadingView : UIView {
    UIActivityIndicatorView * _activityIndicatorView;
    UILabel * _loadingLabel;
    NSString * _loadingTitle;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (getter=isLoadingIndicatorVisible, nonatomic) bool loadingIndicatorVisible;
@property (nonatomic, retain) UILabel *loadingLabel;
@property (nonatomic, copy) NSString *loadingTitle;

- (void).cxx_destruct;
- (id)activityIndicatorView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLoadingIndicatorVisible;
- (void)layoutSubviews;
- (id)loadingLabel;
- (id)loadingTitle;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setLoadingIndicatorVisible:(bool)arg1;
- (void)setLoadingIndicatorVisible:(bool)arg1 animated:(bool)arg2;
- (void)setLoadingLabel:(id)arg1;
- (void)setLoadingTitle:(id)arg1;

@end
