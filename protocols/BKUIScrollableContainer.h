
@protocol BKUIScrollableContainer <NSObject>

@required

- (BKUIPearlInstructionView *)animatingInstructionView;
- (BKUIButtonTray *)buttonTray;
- (NSLayoutConstraint *)buttonTrayTopAnchor;
- (NSLayoutConstraint *)horizontalConstraint;
- (long long)indicatorStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 buttonTray:(BKUIButtonTray *)arg2;
- (BKUIPearlInstructionView *)instructionView;
- (NSLayoutConstraint *)instructionViewTopConstraint;
- (NSLayoutConstraint *)pinButtonTrayToScrollViewBottomConstraint;
- (UIView *)scrollContentView;
- (void)setAnimatingInstructionView:(BKUIPearlInstructionView *)arg1;
- (void)setButtonTray:(BKUIButtonTray *)arg1;
- (void)setButtonTrayTopAnchor:(NSLayoutConstraint *)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setHorizontalConstraint:(NSLayoutConstraint *)arg1;
- (void)setIndicatorStyle:(long long)arg1;
- (void)setInstructionView:(BKUIPearlInstructionView *)arg1;
- (void)setInstructionViewTopConstraint:(NSLayoutConstraint *)arg1;
- (void)setPinButtonTrayToScrollViewBottomConstraint:(NSLayoutConstraint *)arg1;
- (void)setScrollContentView:(UIView *)arg1;
- (void)setShowsVerticalScrollIndicator:(bool)arg1;
- (void)setTopToSuperViewConstraint:(NSLayoutConstraint *)arg1;
- (bool)showsVerticalScrollIndicator;
- (NSLayoutConstraint *)topToSuperViewConstraint;

@end
