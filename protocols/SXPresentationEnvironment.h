
@protocol SXPresentationEnvironment <NSObject>

@required

- (UITraitCollection *)presentationTraitCollection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (bool)smartInvertColorsEnabled;
- (unsigned long long)viewingLocation;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
