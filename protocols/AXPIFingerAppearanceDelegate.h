
@protocol AXPIFingerAppearanceDelegate <NSObject>

@required

- (UIColor *)circularProgressFillColor;
- (UIColor *)deselectedFillColor;
- (UIColor *)deselectedStrokeColor;
- (double)fingerInnerCircleInnerRadius;
- (double)fingerInnerRadius;
- (double)fingerWidth;
- (double)innerCircleStrokeWidth;
- (double)pressedAlpha;
- (UIColor *)pressedCircularProgressFillColor;
- (double)pressedScale;
- (UIColor *)selectedFillColor;
- (UIColor *)selectedStrokeColor;
- (bool)showFingerOutlines;
- (bool)showInnerCircle;
- (UIColor *)strokeOutlineColor;
- (double)strokeOutlineWidth;
- (double)strokeWidth;
- (double)unpressedAlpha;
- (double)unpressedScale;
- (bool)useSystemFilters;

@end
