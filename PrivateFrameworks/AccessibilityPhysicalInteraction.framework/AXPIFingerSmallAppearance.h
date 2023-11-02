
@interface AXPIFingerSmallAppearance : NSObject <AXPIFingerAppearanceDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)circularProgressFillColor;
- (id)deselectedFillColor;
- (id)deselectedStrokeColor;
- (double)fingerInnerCircleInnerRadius;
- (double)fingerInnerRadius;
- (double)fingerWidth;
- (double)innerCircleStrokeWidth;
- (double)pressedAlpha;
- (id)pressedCircularProgressFillColor;
- (double)pressedScale;
- (id)selectedFillColor;
- (id)selectedStrokeColor;
- (bool)showFingerOutlines;
- (bool)showInnerCircle;
- (id)strokeOutlineColor;
- (double)strokeOutlineWidth;
- (double)strokeWidth;
- (double)unpressedAlpha;
- (double)unpressedScale;
- (bool)useSystemFilters;

@end
