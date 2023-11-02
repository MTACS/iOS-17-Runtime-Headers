
@interface _UIContextMenuLargePaletteCellLayout : NSObject <_UIContextMenuCellLayout> {
    _UIContextMenuCellContentView * _contentView;
    NSArray * _managedConstraints;
}

@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } backgroundViewInsets;
@property (nonatomic) _UIContextMenuCellContentView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long focusStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIHoverStyle *hoverStyle;
@property (nonatomic, readonly) unsigned long long labelMaximumNumberOfLines;
@property (nonatomic, readonly) long long labelTextAlignment;
@property (nonatomic, readonly) long long layoutSize;
@property (nonatomic, retain) NSArray *managedConstraints;
@property (nonatomic, readonly) UIColor *preferredBackgroundColorForCurrentState;
@property (nonatomic, readonly) UIColor *preferredContentColorForCurrentState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })backgroundViewInsets;
- (id)contentView;
- (long long)focusStyle;
- (id)hoverStyle;
- (id)initWithContentView:(id)arg1;
- (void)installConstraints;
- (unsigned long long)labelMaximumNumberOfLines;
- (long long)labelTextAlignment;
- (long long)layoutSize;
- (id)managedConstraints;
- (id)preferredBackgroundColorForCurrentState;
- (id)preferredContentColorForCurrentState;
- (id)preferredIconFontUsingBoldFont:(bool)arg1;
- (void)removeConstraints;
- (void)setContentView:(id)arg1;
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;
- (void)setManagedConstraints:(id)arg1;
- (void)updateConstraints;

@end
