
@interface PUAmbientPhotoFrameSettings : PXSettings <PhotosUIPrivate.PUWallpaperShuffleConfigurationViewControllerDelegate> {
    bool  _disableLetterAndPillarBoxing;
    bool  _disableNUp;
    double  _fixedAssetDuration;
    bool  _forceColdStart;
    bool  _includeFeaturedPhotosInFeatured;
    bool  _includeHighlightAssetsInFeatured;
    bool  _includePhotosInRadar;
    double  _kenBurnsPanSpeed;
    double  _kenBurnsScaleSpeed;
    NSArray * _personLocalIdentifiers;
    bool  _showCitiesCuratedAssets;
    bool  _showCuratedCategories;
    bool  _showFavoriteAlbumAssets;
    bool  _showFeaturedCuratedAssets;
    bool  _showNatureCuratedAssets;
    bool  _showPeopleCuratedAssets;
    bool  _showPetsCuratedAssets;
    bool  _showTapToRadarButton;
}

@property (nonatomic) bool disableLetterAndPillarBoxing;
@property (nonatomic) bool disableNUp;
@property (nonatomic) double fixedAssetDuration;
@property (nonatomic) bool forceColdStart;
@property (nonatomic) bool includeFeaturedPhotosInFeatured;
@property (nonatomic) bool includeHighlightAssetsInFeatured;
@property (nonatomic) bool includePhotosInRadar;
@property (nonatomic) double kenBurnsPanSpeed;
@property (nonatomic) double kenBurnsScaleSpeed;
@property (nonatomic, retain) NSArray *personLocalIdentifiers;
@property (nonatomic) bool showCitiesCuratedAssets;
@property (nonatomic) bool showCuratedCategories;
@property (nonatomic) bool showFavoriteAlbumAssets;
@property (nonatomic) bool showFeaturedCuratedAssets;
@property (nonatomic) bool showNatureCuratedAssets;
@property (nonatomic) bool showPeopleCuratedAssets;
@property (nonatomic) bool showPetsCuratedAssets;
@property (nonatomic) bool showTapToRadarButton;

+ (id)_enabledCurationCategoriesPredicate;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)disableLetterAndPillarBoxing;
- (bool)disableNUp;
- (double)fixedAssetDuration;
- (bool)forceColdStart;
- (bool)includeFeaturedPhotosInFeatured;
- (bool)includeHighlightAssetsInFeatured;
- (bool)includePhotosInRadar;
- (double)kenBurnsPanSpeed;
- (double)kenBurnsScaleSpeed;
- (id)parentSettings;
- (id)personLocalIdentifiers;
- (void)setDefaultValues;
- (void)setDisableLetterAndPillarBoxing:(bool)arg1;
- (void)setDisableNUp:(bool)arg1;
- (void)setFixedAssetDuration:(double)arg1;
- (void)setForceColdStart:(bool)arg1;
- (void)setIncludeFeaturedPhotosInFeatured:(bool)arg1;
- (void)setIncludeHighlightAssetsInFeatured:(bool)arg1;
- (void)setIncludePhotosInRadar:(bool)arg1;
- (void)setKenBurnsPanSpeed:(double)arg1;
- (void)setKenBurnsScaleSpeed:(double)arg1;
- (void)setPersonLocalIdentifiers:(id)arg1;
- (void)setShowCitiesCuratedAssets:(bool)arg1;
- (void)setShowCuratedCategories:(bool)arg1;
- (void)setShowFavoriteAlbumAssets:(bool)arg1;
- (void)setShowFeaturedCuratedAssets:(bool)arg1;
- (void)setShowNatureCuratedAssets:(bool)arg1;
- (void)setShowPeopleCuratedAssets:(bool)arg1;
- (void)setShowPetsCuratedAssets:(bool)arg1;
- (void)setShowTapToRadarButton:(bool)arg1;
- (bool)showCitiesCuratedAssets;
- (bool)showCuratedCategories;
- (bool)showFavoriteAlbumAssets;
- (bool)showFeaturedCuratedAssets;
- (bool)showNatureCuratedAssets;
- (bool)showPeopleCuratedAssets;
- (bool)showPetsCuratedAssets;
- (bool)showTapToRadarButton;
- (void)wallpaperShuffleConfigurationViewController:(id)arg1 didFinishWithPosterConfiguration:(id)arg2;
- (void)wallpaperShuffleConfigurationViewControllerDidCancelManuallySelectingPhotos:(id)arg1;
- (void)wallpaperShuffleConfigurationViewControllerDidDismiss:(id)arg1;

@end
