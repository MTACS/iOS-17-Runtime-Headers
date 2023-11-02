
@protocol _MKBalloonCalloutViewConfiguring <NSObject>

@required

- (long long)_balloonCalloutStyle;
- (UIImage *)_balloonImage;
- (UIColor *)_balloonStrokeColor;
- (UIColor *)_balloonTintColor;

@optional

- (bool)_balloonCalloutShouldCenterWhenOffscreen;
- (bool)_balloonCalloutShouldOriginateFromSmallSize:(double*)arg1;
- (bool)_balloonCalloutShouldShowArrow;
- (UIView *)_balloonContentView;
- (UIColor *)_balloonImageTintColor;
- (UIColor *)_balloonInnerStrokeColor;
- (UIBlurEffect *)_balloonMaterial;

@end
