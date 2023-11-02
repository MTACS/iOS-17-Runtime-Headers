
@interface VUILibraryAlertView : UIView {
    UIView * _containerView;
    UIScrollView * _scrollView;
    VUILabel * _subtitleLabel;
    VUILabel * _titleLabel;
}

@property (nonatomic, readonly) VUILabel *subtitleLabel;
@property (nonatomic, readonly) VUILabel *titleLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)subtitleLabel;
- (id)titleLabel;

@end
