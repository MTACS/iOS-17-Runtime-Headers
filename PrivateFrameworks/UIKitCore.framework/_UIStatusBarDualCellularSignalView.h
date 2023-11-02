
@interface _UIStatusBarDualCellularSignalView : UIView <_UIStatusBarDisplayable> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentRectInsets;
    _UIStatusBarCellularSignalView * _bottomSignalView;
    long long  _iconSize;
    bool  _rounded;
    NSLayoutConstraint * _topConstraint;
    _UIStatusBarCellularSignalView * _topSignalView;
    NSLayoutConstraint * _verticalInterspaceConstraint;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property (readonly) _UIStatusBarCellularSignalView *bottomSignalView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long iconSize;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) bool prefersBaselineAlignment;
@property (nonatomic, readonly) bool prefersCenterVerticalAlignment;
@property (nonatomic) bool rounded;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *topConstraint;
@property (readonly) _UIStatusBarCellularSignalView *topSignalView;
@property (nonatomic, retain) NSLayoutConstraint *verticalInterspaceConstraint;
@property (nonatomic, readonly) bool wantsCrossfade;

+ (double)_interspaceForIconSize:(long long)arg1;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_iconSizeDidChange;
- (id)accessibilityHUDRepresentation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)applyStyleAttributes:(id)arg1;
- (id)bottomSignalView;
- (long long)iconSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)rounded;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIconSize:(long long)arg1;
- (void)setRounded:(bool)arg1;
- (void)setTopConstraint:(id)arg1;
- (void)setVerticalInterspaceConstraint:(id)arg1;
- (id)topConstraint;
- (id)topSignalView;
- (id)verticalInterspaceConstraint;
- (id)viewForLastBaselineLayout;

@end
