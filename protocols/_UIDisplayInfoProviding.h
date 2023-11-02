
@protocol _UIDisplayInfoProviding <NSObject>

@required

- (unsigned long long)artworkSubtype;
- (FBSDisplayConfiguration *)displayConfiguration;
- (<_UIDisplayInfoShape> *)exclusionArea;
- (double)homeAffordanceOverlayAllowance;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeLeft;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeRight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortrait;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortraitUpsideDown;
- (double)systemMinimumMargin;

@end
