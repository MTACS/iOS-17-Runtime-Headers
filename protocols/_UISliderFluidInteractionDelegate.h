
@protocol _UISliderFluidInteractionDelegate <NSObject>

@required

- (void)_sliderFluidInteractionWillBegin:(UISlider *)arg1 withLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_sliderFluidInteractionWillContinue:(UISlider *)arg1 withLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_sliderFluidInteractionWillEnd:(UISlider *)arg1;
- (void)_sliderFluidInteractionWillExtend:(UISlider *)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

@end
