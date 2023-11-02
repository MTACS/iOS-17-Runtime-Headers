
@protocol CPWindowProviding <NSObject>

@required

- (long long)activationState;
- (UITraitCollection *)carTraitCollection;
- (CPWindow *)carWindow;
- (void)updateLayoutGuideWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
