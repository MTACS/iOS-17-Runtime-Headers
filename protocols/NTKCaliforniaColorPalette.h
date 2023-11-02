
@protocol NTKCaliforniaColorPalette <NTKFaceColorPalette>

@required

- (UIColor *)background;
- (UIColor *)bezelComplication;
- (UIColor *)circularBackground;
- (UIColor *)circularComplication;
- (UIColor *)circularComplicationSecondary;
- (UIColor *)clockHands;
- (UIColor *)clockHandsInlay;
- (UIColor *)cornerComplication;
- (UIColor *)cornerComplicationSecondary;
- (UIColor *)digit;
- (UIColor *)largeTick;
- (long long)richComplicationViewTheme;
- (UIColor *)secondHand;
- (UIColor *)simpleTextComplication;
- (UIColor *)smallTick;
- (UIColor *)smallTickCircular;

@end
