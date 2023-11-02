
@interface AXUIDaemonWindow : UIWindow

+ (bool)_isSecure;

- (bool)_accessibilityWindowUsesOwnOrientationForComparingGeometry;
- (void)_didUpdateOrientation:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_normalizedSafeAreaInsets;
- (id)init;

@end
