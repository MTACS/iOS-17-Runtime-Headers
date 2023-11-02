
@protocol PBUIPosterComponent <PBUIWallpaperVariantIdentifying>

@required

- (UIColor *)averageColor;
- (double)averageContrast;
- (<PBUIPosterComponentDelegate> *)delegate;
- (_UILegibilitySettings *)legibilitySettings;
- (void)setDelegate:(id <PBUIPosterComponentDelegate>)arg1;
- (long long)variant;

@end
