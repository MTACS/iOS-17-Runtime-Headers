
@interface TUISystemInputAssistantLayoutStandard : TUISystemInputAssistantLayout {
    bool  _isSplit;
    double  _leftSplitWidth;
    double  _rightSplitWidth;
}

@property (nonatomic) bool isSplit;
@property (nonatomic) double leftSplitWidth;
@property (nonatomic) double rightSplitWidth;

- (void)_layoutViewSet:(id)arg1 forFixedCenterViewWidth:(double)arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 forAssistantView:(id)arg4;
- (void)_layoutViewSet:(id)arg1 forFlexibleCenterViewInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forAssistantView:(id)arg3;
- (void)configureButtonBarsInViewSet:(id)arg1 forApplicationAssistantItem:(id)arg2 withSystemAssistantItem:(id)arg3 withAssistantView:(id)arg4;
- (bool)isSplit;
- (void)layoutViewSet:(id)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forAssistantView:(id)arg3;
- (double)leftSplitWidth;
- (double)rightSplitWidth;
- (void)setIsSplit:(bool)arg1;
- (void)setLeftSplitWidth:(double)arg1;
- (void)setRightSplitWidth:(double)arg1;

@end
