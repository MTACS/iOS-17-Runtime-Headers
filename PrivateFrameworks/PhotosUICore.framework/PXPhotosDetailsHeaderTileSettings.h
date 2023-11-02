
@interface PXPhotosDetailsHeaderTileSettings : PXSettings {
    double  _aspectRatio;
    double  _maximumAbsoluteHeight;
    double  _maximumHeightRelativeToScreenHeight;
    bool  _showAlways;
}

@property (nonatomic) double aspectRatio;
@property (nonatomic) double maximumAbsoluteHeight;
@property (nonatomic) double maximumHeightRelativeToScreenHeight;
@property (nonatomic) bool showAlways;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (double)aspectRatio;
- (double)maximumAbsoluteHeight;
- (double)maximumHeightRelativeToScreenHeight;
- (id)parentSettings;
- (void)setAspectRatio:(double)arg1;
- (void)setDefaultValues;
- (void)setMaximumAbsoluteHeight:(double)arg1;
- (void)setMaximumHeightRelativeToScreenHeight:(double)arg1;
- (void)setShowAlways:(bool)arg1;
- (bool)showAlways;

@end
