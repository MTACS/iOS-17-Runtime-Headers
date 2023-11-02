
@interface SBPIPStashedMaskView : UIView {
    UIView * _mainBody;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumStashTabSize;
    UIView * _tab;
    UIView * _tabBottomCornerFill;
    bool  _tabHidden;
    UIView * _tabLeftBottomCornerDestOut;
    UIView * _tabLeftTopCornerDestOut;
    UIView * _tabRightBottomCornerDestOut;
    UIView * _tabRightTopCornerDestOut;
    UIView * _tabShadowView;
    bool  _tabShownLeft;
    UIView * _tabTopCornerFill;
}

@property (nonatomic) struct CGSize { double x1; double x2; } minimumStashTabSize;
@property (nonatomic) UIView *tabShadowView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } tabViewBounds;

- (void).cxx_destruct;
- (double)_continuousCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainBodyBounds;
- (void)_setContinuousCornerRadius:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 minimumStashTabSize:(struct CGSize { double x1; double x2; })arg2;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })minimumStashTabSize;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setMinimumStashTabSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTabHidden:(bool)arg1 left:(bool)arg2;
- (void)setTabShadowView:(id)arg1;
- (id)tabShadowView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tabViewBounds;

@end
