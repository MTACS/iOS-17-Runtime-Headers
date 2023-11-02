
@interface _UIContextMenuMediumCellLayout : NSObject <_UIContextMenuCellLayout> {
    NSLayoutConstraint * _bottomConstraint;
    _UIContextMenuCellContentView * _contentView;
    NSLayoutConstraint * _fittingBottomConstraint;
    NSArray * _managedConstraints;
    NSLayoutConstraint * _minimumHeightConstraint;
    NSLayoutConstraint * _primaryViewCenterYConstraint;
    NSLayoutConstraint * _topConstraint;
}

@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } backgroundViewInsets;
@property (nonatomic, retain) NSLayoutConstraint *bottomConstraint;
@property (nonatomic) _UIContextMenuCellContentView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSLayoutConstraint *fittingBottomConstraint;
@property (nonatomic, readonly) long long focusStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIHoverStyle *hoverStyle;
@property (nonatomic, readonly) unsigned long long labelMaximumNumberOfLines;
@property (nonatomic, readonly) long long labelTextAlignment;
@property (nonatomic, readonly) long long layoutSize;
@property (nonatomic, retain) NSArray *managedConstraints;
@property (nonatomic, retain) NSLayoutConstraint *minimumHeightConstraint;
@property (nonatomic, readonly) UIColor *preferredBackgroundColorForCurrentState;
@property (nonatomic, readonly) UIColor *preferredContentColorForCurrentState;
@property (nonatomic, retain) NSLayoutConstraint *primaryViewCenterYConstraint;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *topConstraint;

- (void).cxx_destruct;
- (bool)_hasTitle;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })backgroundViewInsets;
- (id)bottomConstraint;
- (id)contentView;
- (id)fittingBottomConstraint;
- (long long)focusStyle;
- (id)hoverStyle;
- (id)initWithContentView:(id)arg1;
- (void)installConstraints;
- (unsigned long long)labelMaximumNumberOfLines;
- (long long)labelTextAlignment;
- (long long)layoutSize;
- (id)managedConstraints;
- (id)minimumHeightConstraint;
- (id)preferredBackgroundColorForCurrentState;
- (id)preferredContentColorForCurrentState;
- (id)preferredIconFontUsingBoldFont:(bool)arg1;
- (id)primaryViewCenterYConstraint;
- (void)removeConstraints;
- (void)setBottomConstraint:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;
- (void)setFittingBottomConstraint:(id)arg1;
- (void)setManagedConstraints:(id)arg1;
- (void)setMinimumHeightConstraint:(id)arg1;
- (void)setPrimaryViewCenterYConstraint:(id)arg1;
- (void)setTopConstraint:(id)arg1;
- (id)topConstraint;
- (void)updateConstraints;

@end
