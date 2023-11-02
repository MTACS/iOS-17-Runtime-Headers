
@protocol MRUSliderObserver <NSObject>

@optional

- (void)sliderInteractionWillBegin:(MRUSlider *)arg1 withLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)sliderInteractionWillContinue:(MRUSlider *)arg1 withLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)sliderInteractionWillEnd:(MRUSlider *)arg1;
- (void)sliderInteractionWillExtend:(MRUSlider *)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

@end
