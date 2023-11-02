
@interface TUISystemInputAssistantLayoutSplit : TUISystemInputAssistantLayout {
    double  _leftSplitWidth;
    double  _rightSplitWidth;
}

@property (nonatomic) double leftSplitWidth;
@property (nonatomic) double rightSplitWidth;

- (void)configureButtonBarsInViewSet:(id)arg1 forApplicationAssistantItem:(id)arg2 withSystemAssistantItem:(id)arg3 withAssistantView:(id)arg4;
- (id)init;
- (void)layoutViewSet:(id)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forAssistantView:(id)arg3;
- (double)leftSplitWidth;
- (double)rightSplitWidth;
- (void)setLeftSplitWidth:(double)arg1;
- (void)setRightSplitWidth:(double)arg1;
- (bool)usesUnifiedButtonBar;

@end
