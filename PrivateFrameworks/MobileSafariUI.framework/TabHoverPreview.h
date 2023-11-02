
@interface TabHoverPreview : UIView {
    NSLayoutConstraint * _centerXConstraint;
    NSLayoutConstraint * _heightConstraint;
    bool  _insetsPreviewFromTabBarEdge;
    NSLayoutConstraint * _leadingConstraint;
    NSLayoutConstraint * _leadingEdgeConstraint;
    UILabel * _secondaryTitleLabel;
    NSLayoutConstraint * _snapshotHeightWidthRatioConstraint;
    TabSnapshotImageView * _snapshotView;
    UIView * _tabBar;
    UILabel * _titleLabel;
    double  _topInset;
    NSLayoutConstraint * _trailingEdgeConstraint;
}

@property (nonatomic) bool insetsPreviewFromTabBarEdge;
@property (nonatomic, retain) NSString *secondaryTitleText;
@property (readonly) UIView *tabBar;
@property (nonatomic, retain) NSString *titleText;
@property (nonatomic) double topInset;

- (void).cxx_destruct;
- (void)_setPositionalConstraintsActive:(bool)arg1;
- (void)_updateConstraintsWithItemView:(id)arg1;
- (void)dismissPreview;
- (id)initWithTabBar:(id)arg1;
- (bool)insetsPreviewFromTabBarEdge;
- (id)secondaryTitleText;
- (void)setInsetsPreviewFromTabBarEdge:(bool)arg1;
- (void)setSecondaryTitleText:(id)arg1;
- (void)setSnapshotImage:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTopInset:(double)arg1;
- (void)showPreviewForItemView:(id)arg1;
- (id)tabBar;
- (id)titleText;
- (double)topInset;

@end
