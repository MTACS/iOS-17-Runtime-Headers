
@interface PXStoryScrubberLayoutSettings : PXSettings {
    double  _assetCornerRadius;
    double  _currentAssetPadding;
    double  _currentAssetWidthLandscape;
    double  _currentAssetWidthPortrait;
    double  _defaultAssetPadding;
    double  _defaultAssetWidthLandscape;
    double  _defaultAssetWidthPortrait;
    double  _scrubberHeightLandscape;
    double  _scrubberHeightPortrait;
}

@property (nonatomic) double assetCornerRadius;
@property (nonatomic) double currentAssetPadding;
@property (nonatomic) double currentAssetWidthLandscape;
@property (nonatomic) double currentAssetWidthPortrait;
@property (nonatomic) double defaultAssetPadding;
@property (nonatomic) double defaultAssetWidthLandscape;
@property (nonatomic) double defaultAssetWidthPortrait;
@property (nonatomic) double scrubberHeightLandscape;
@property (nonatomic) double scrubberHeightPortrait;

+ (id)_sliderFor:(id)arg1 path:(id)arg2;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (double)assetCornerRadius;
- (double)currentAssetPadding;
- (double)currentAssetWidthLandscape;
- (double)currentAssetWidthPortrait;
- (double)defaultAssetPadding;
- (double)defaultAssetWidthLandscape;
- (double)defaultAssetWidthPortrait;
- (id)parentSettings;
- (double)scrubberHeightLandscape;
- (double)scrubberHeightPortrait;
- (void)setAssetCornerRadius:(double)arg1;
- (void)setCurrentAssetPadding:(double)arg1;
- (void)setCurrentAssetWidthLandscape:(double)arg1;
- (void)setCurrentAssetWidthPortrait:(double)arg1;
- (void)setDefaultAssetPadding:(double)arg1;
- (void)setDefaultAssetWidthLandscape:(double)arg1;
- (void)setDefaultAssetWidthPortrait:(double)arg1;
- (void)setDefaultValues;
- (void)setScrubberHeightLandscape:(double)arg1;
- (void)setScrubberHeightPortrait:(double)arg1;

@end
