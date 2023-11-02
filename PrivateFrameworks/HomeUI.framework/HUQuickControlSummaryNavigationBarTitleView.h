
@interface HUQuickControlSummaryNavigationBarTitleView : _UINavigationBarTitleView {
    NSArray * _contentConstraints;
    double  _leadingMargin;
    double  _navigationBarMinHeight;
    UIView * _titleView;
    double  _trailingMargin;
}

@property (nonatomic, retain) NSArray *contentConstraints;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double navigationBarMinHeight;
@property (nonatomic, readonly) HUQuickControlSummaryView *summaryView;
@property (nonatomic, retain) UIView *titleView;
@property (nonatomic) double trailingMargin;

- (void).cxx_destruct;
- (id)contentConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)leadingMargin;
- (double)navigationBarMinHeight;
- (void)setContentConstraints:(id)arg1;
- (void)setLeadingMargin:(double)arg1;
- (void)setNavigationBarMinHeight:(double)arg1;
- (void)setTitleView:(id)arg1;
- (void)setTrailingMargin:(double)arg1;
- (id)summaryView;
- (id)titleView;
- (double)trailingMargin;
- (void)transitionCompleted:(long long)arg1 willBeDisplayed:(bool)arg2;
- (void)updateConstraints;
- (void)updateLeadingMargin:(double)arg1;
- (void)updateTitleView:(id)arg1;
- (void)updateTrailingMargin:(double)arg1;

@end
