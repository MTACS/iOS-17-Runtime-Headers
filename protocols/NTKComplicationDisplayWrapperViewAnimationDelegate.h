
@protocol NTKComplicationDisplayWrapperViewAnimationDelegate <NSObject>

@required

- (bool)complicationDisplayWrapperView:(NTKComplicationDisplayWrapperView *)arg1 shouldStartCustomDataAnimationFromEarlierView:(UIView *)arg2 laterView:(UIView *)arg3 isForward:(bool)arg4 animationType:(unsigned long long)arg5;
- (void)complicationDisplayWrapperView:(NTKComplicationDisplayWrapperView *)arg1 updateCustomDataAnimationFromEarlierView:(UIView *)arg2 laterView:(UIView *)arg3 isForward:(bool)arg4 animationType:(unsigned long long)arg5 animationDuration:(double)arg6 animationFraction:(float)arg7;

@end
