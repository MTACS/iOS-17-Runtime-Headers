
@interface UIRemoteKeyboardWindowHosted : UIRemoteKeyboardWindow

+ (bool)_isHostedInAnotherProcess;
+ (bool)_isSecure;

- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (bool)_isTextEffectsWindowHosting;
- (long long)_orientationForRootTransform;
- (long long)_orientationForSceneTransform;
- (long long)_orientationForViewTransform;
- (struct CGSize { double x1; double x2; })keyboardScreenReferenceSize;
- (double)keyboardWidthForCurrentDevice;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;

@end
