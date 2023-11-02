
@interface SBSpringBoardApplicationIcon : SBLeafIcon {
    long long  _interfaceStyle;
}

- (id)_generateImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (bool)canTightenLabel;
- (bool)canTruncateLabel;
- (id)displayNameForLocation:(id)arg1;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (id)init;
- (id)initWithInterfaceStyle:(long long)arg1;
- (id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2;
- (bool)isUninstallSupported;

@end
