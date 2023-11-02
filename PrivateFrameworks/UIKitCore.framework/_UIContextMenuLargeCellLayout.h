
@interface _UIContextMenuLargeCellLayout : NSObject <_UIContextMenuCellLayout> {
    _UIContextMenuCellContentView * _contentView;
    NSLayoutConstraint * _decorationViewCenterX;
    NSLayoutConstraint * _iconViewCenterXToTrailing;
    NSLayoutConstraint * _labelStackViewTrailingToiconViewCenterX;
    NSLayoutConstraint * _lastBaselineToBottom;
    NSLayoutConstraint * _leadingToLabelStackViewLeading;
    NSArray * _managedConstraints;
    NSLayoutConstraint * _minHeightConstraint;
    NSLayoutConstraint * _topToFirstBaseline;
}

@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } backgroundViewInsets;
@property (nonatomic) _UIContextMenuCellContentView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSLayoutConstraint *decorationViewCenterX;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long focusStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIHoverStyle *hoverStyle;
@property (nonatomic, retain) NSLayoutConstraint *iconViewCenterXToTrailing;
@property (nonatomic, readonly) unsigned long long labelMaximumNumberOfLines;
@property (nonatomic, retain) NSLayoutConstraint *labelStackViewTrailingToiconViewCenterX;
@property (nonatomic, readonly) long long labelTextAlignment;
@property (nonatomic, retain) NSLayoutConstraint *lastBaselineToBottom;
@property (nonatomic, readonly) long long layoutSize;
@property (nonatomic, retain) NSLayoutConstraint *leadingToLabelStackViewLeading;
@property (nonatomic, retain) NSArray *managedConstraints;
@property (nonatomic, retain) NSLayoutConstraint *minHeightConstraint;
@property (nonatomic, readonly) UIColor *preferredBackgroundColorForCurrentState;
@property (nonatomic, readonly) UIColor *preferredContentColorForCurrentState;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *topToFirstBaseline;

- (void).cxx_destruct;
- (bool)_hasTrailingAccessory;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })backgroundViewInsets;
- (id)contentView;
- (id)decorationViewCenterX;
- (long long)focusStyle;
- (id)hoverStyle;
- (id)iconViewCenterXToTrailing;
- (id)initWithContentView:(id)arg1;
- (void)installConstraints;
- (unsigned long long)labelMaximumNumberOfLines;
- (id)labelStackViewTrailingToiconViewCenterX;
- (long long)labelTextAlignment;
- (id)lastBaselineToBottom;
- (long long)layoutSize;
- (id)leadingToLabelStackViewLeading;
- (id)managedConstraints;
- (id)minHeightConstraint;
- (id)preferredBackgroundColorForCurrentState;
- (id)preferredContentColorForCurrentState;
- (id)preferredIconFontUsingBoldFont:(bool)arg1;
- (void)removeConstraints;
- (void)setContentView:(id)arg1;
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;
- (void)setDecorationViewCenterX:(id)arg1;
- (void)setIconViewCenterXToTrailing:(id)arg1;
- (void)setLabelStackViewTrailingToiconViewCenterX:(id)arg1;
- (void)setLastBaselineToBottom:(id)arg1;
- (void)setLeadingToLabelStackViewLeading:(id)arg1;
- (void)setManagedConstraints:(id)arg1;
- (void)setMinHeightConstraint:(id)arg1;
- (void)setTopToFirstBaseline:(id)arg1;
- (id)topToFirstBaseline;
- (void)updateConstraints;

@end
