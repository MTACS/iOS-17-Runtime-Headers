
@protocol JFXPassThroughContainerViewDelegate <NSObject>

@required

- (bool)passThroughContainerView:(JFXPassThroughContainerView *)arg1 shouldHandleTouchWithinView:(UIView *)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;

@optional

- (bool)passThroughContainerView:(JFXPassThroughContainerView *)arg1 hasPointInside:(struct CGPoint { double x1; double x2; })arg2;

@end
