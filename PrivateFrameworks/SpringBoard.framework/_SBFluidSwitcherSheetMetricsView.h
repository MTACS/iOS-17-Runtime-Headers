
@interface _SBFluidSwitcherSheetMetricsView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _overrideSafeAreaInsets;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } overrideSafeAreaInsets;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsetsForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inSuperview:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })overrideSafeAreaInsets;
- (void)setOverrideSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
