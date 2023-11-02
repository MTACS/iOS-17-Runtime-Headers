
@interface CSCoverSheetTransitionsSettings : PTSettings {
    CSCoverSheetTransitionSettings * _differentWallpaperInitialTransitionSettings;
    CSCoverSheetTransitionSettings * _differentWallpaperSubsequentTransitionSettings;
    CSCoverSheetFlyInSettings * _flyInSettings;
    double  _friction;
    double  _inPlaceFriction;
    double  _inPlaceTension;
    CSCoverSheetTransitionSettings * _inactiveOverAppTransitionSettings;
    CSCoverSheetTransitionSettings * _inactiveOverHomescreenTransitionSettings;
    CSCoverSheetTransitionSettings * _overAppTransitionSettings;
    CSCoverSheetTransitionSettings * _overLandscapeTransitionSettings;
    CSCoverSheetTransitionSettings * _sameWallpaperInitialTransitionSettings;
    CSCoverSheetTransitionSettings * _sameWallpaperSubsequentTransitionSettings;
    double  _tension;
}

@property (nonatomic, retain) CSCoverSheetTransitionSettings *differentWallpaperInitialTransitionSettings;
@property (nonatomic, retain) CSCoverSheetTransitionSettings *differentWallpaperSubsequentTransitionSettings;
@property (nonatomic, retain) CSCoverSheetFlyInSettings *flyInSettings;
@property (nonatomic) double friction;
@property (nonatomic) double inPlaceFriction;
@property (nonatomic) double inPlaceTension;
@property (nonatomic, retain) CSCoverSheetTransitionSettings *inactiveOverAppTransitionSettings;
@property (nonatomic, retain) CSCoverSheetTransitionSettings *inactiveOverHomescreenTransitionSettings;
@property (nonatomic, retain) CSCoverSheetTransitionSettings *overAppTransitionSettings;
@property (nonatomic, retain) CSCoverSheetTransitionSettings *overLandscapeTransitionSettings;
@property (nonatomic, retain) CSCoverSheetTransitionSettings *sameWallpaperInitialTransitionSettings;
@property (nonatomic, retain) CSCoverSheetTransitionSettings *sameWallpaperSubsequentTransitionSettings;
@property (nonatomic) double tension;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)differentWallpaperInitialTransitionSettings;
- (id)differentWallpaperSubsequentTransitionSettings;
- (id)flyInSettings;
- (double)friction;
- (double)inPlaceFriction;
- (double)inPlaceTension;
- (id)inactiveOverAppTransitionSettings;
- (id)inactiveOverHomescreenTransitionSettings;
- (id)overAppTransitionSettings;
- (id)overLandscapeTransitionSettings;
- (id)sameWallpaperInitialTransitionSettings;
- (id)sameWallpaperSubsequentTransitionSettings;
- (void)setDefaultValues;
- (void)setDefaultValuesForBaseConfiguration;
- (void)setDefaultValuesForBlurOnly;
- (void)setDefaultValuesForFadeAndScale;
- (void)setDefaultValuesForParallaxAndBlur;
- (void)setDefaultValuesForParallaxOnly;
- (void)setDifferentWallpaperInitialTransitionSettings:(id)arg1;
- (void)setDifferentWallpaperSubsequentTransitionSettings:(id)arg1;
- (void)setFlyInSettings:(id)arg1;
- (void)setFriction:(double)arg1;
- (void)setInPlaceFriction:(double)arg1;
- (void)setInPlaceTension:(double)arg1;
- (void)setInactiveOverAppTransitionSettings:(id)arg1;
- (void)setInactiveOverHomescreenTransitionSettings:(id)arg1;
- (void)setOverAppTransitionSettings:(id)arg1;
- (void)setOverLandscapeTransitionSettings:(id)arg1;
- (void)setSameWallpaperInitialTransitionSettings:(id)arg1;
- (void)setSameWallpaperSubsequentTransitionSettings:(id)arg1;
- (void)setTension:(double)arg1;
- (double)tension;

@end
