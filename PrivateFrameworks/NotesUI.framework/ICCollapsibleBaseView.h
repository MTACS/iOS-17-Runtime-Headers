
@interface ICCollapsibleBaseView : UIView {
    bool  _collapsed;
    UIView * _contentView;
    NSLayoutConstraint * _leadingConstraint;
    double  _leadingSpace;
    bool  _setupComplete;
    NSLayoutConstraint * _trailingConstraint;
    double  _trailingSpace;
    NSLayoutConstraint * _zeroWidthConstraint;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) NSLayoutConstraint *leadingConstraint;
@property (nonatomic) double leadingSpace;
@property (nonatomic) bool setupComplete;
@property (nonatomic, retain) NSLayoutConstraint *trailingConstraint;
@property (nonatomic) double trailingSpace;
@property (nonatomic, retain) NSLayoutConstraint *zeroWidthConstraint;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)contentView;
- (void)ic_setNeedsUpdateConstraints;
- (bool)isCollapsed;
- (id)leadingConstraint;
- (double)leadingSpace;
- (void)performSetUpWithContentView:(id)arg1;
- (void)performSetup;
- (void)setCollapsed:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setLeadingConstraint:(id)arg1;
- (void)setLeadingSpace:(double)arg1;
- (void)setSetupComplete:(bool)arg1;
- (void)setTrailingConstraint:(id)arg1;
- (void)setTrailingSpace:(double)arg1;
- (void)setUpIfNeeded;
- (void)setZeroWidthConstraint:(id)arg1;
- (bool)setupComplete;
- (id)trailingConstraint;
- (double)trailingSpace;
- (bool)wantsLayer;
- (id)zeroWidthConstraint;

@end
