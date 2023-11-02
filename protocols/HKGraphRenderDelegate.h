
@protocol HKGraphRenderDelegate <NSObject>

@required

- (void)graphRenderer:(UIView<HKGraphRenderer> *)arg1 shouldRenderSceneWithContext:(struct CGContext { }*)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)stillAnimating:(UIView<HKGraphRenderer> *)arg1;

@end
