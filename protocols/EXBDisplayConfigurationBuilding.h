
@protocol EXBDisplayConfigurationBuilding <NSObject>

@required

- (FBSDisplayConfiguration *)buildConfigurationWithError:(out id*)arg1;
- (void)setCloningSupported:(bool)arg1;
- (void)setCurrentMode:(FBSDisplayMode *)arg1 preferredMode:(FBSDisplayMode *)arg2 otherModes:(NSSet *)arg3;
- (void)setExpectsSecureRendering;
- (void)setOverscanned:(bool)arg1 compensation:(long long)arg2 safeRatio:(struct CGSize { double x1; double x2; })arg3;
- (void)setPixelSize:(struct CGSize { double x1; double x2; })arg1 nativeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)setUIKitMainLike;
- (void)setUniqueIdentifier:(NSString *)arg1;

@end
