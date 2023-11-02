
@interface SBReachabilityWindow : SBSecureWindow

- (bool)_allowsOcclusionDetectionOverride;
- (id)initWithWallpaperVariant:(long long)arg1 windowScene:(id)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)view;

@end
