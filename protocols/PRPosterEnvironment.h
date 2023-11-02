
@protocol PRPosterEnvironment <NSObject>

@required

- (UIColor *)caseColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentCutoutBounds;
- (PRPosterEnvironmentContext *)context;
- (long long)deviceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })floatingObscurableBounds;
- (NSString *)role;
- (unsigned long long)significantEventsCounter;
- (PRTimeFontConfiguration *)sourceTimeFontConfiguration;
- (UITraitCollection *)traitCollection;
- (long long)userInterfaceStyle;

@end
