
@interface PUSuggestionsSettings : PXSettings {
    bool  _debugBackfillCompositing;
    bool  _debugDisableFrameUpdates;
    bool  _debugRoundTripLayerStack;
    bool  _enableFRCInAssetDetails;
    bool  _includeDebugLayers;
    unsigned long long  _livePhotoTabFetchLimit;
    double  _parallaxAmount;
    long long  _primarySort;
    long long  _secondarySort;
    PUWallpaperShortcutsPlaygroundSettings * _shortcutsPlaygroundSettings;
    long long  _sourceMode;
    long long  _viewMode;
}

@property (nonatomic) bool debugBackfillCompositing;
@property (nonatomic) bool debugDisableFrameUpdates;
@property (nonatomic) bool debugRoundTripLayerStack;
@property (nonatomic) bool debugTintLayers;
@property (nonatomic) bool disableSegmentation;
@property (nonatomic) bool disableSegmentationCache;
@property (nonatomic) bool enableCustomStyles;
@property (nonatomic) bool enableFRCInAssetDetails;
@property (nonatomic) bool enableGreenScreenStyles;
@property (nonatomic) bool includeDebugLayers;
@property (nonatomic) long long infillMode;
@property (nonatomic) unsigned long long livePhotoTabFetchLimit;
@property (nonatomic) double manualGatingLenience;
@property (nonatomic) double parallaxAmount;
@property (nonatomic) long long primarySort;
@property (nonatomic) long long secondarySort;
@property (nonatomic, retain) PUWallpaperShortcutsPlaygroundSettings *shortcutsPlaygroundSettings;
@property (nonatomic) long long sourceMode;
@property (nonatomic) long long viewMode;

+ (id)_debugRowsForCurrentAsset;
+ (id)settingsControllerModule;
+ (id)sharedInstance;
+ (id)sortDescriptorForMode:(long long)arg1;

- (void).cxx_destruct;
- (void)createChildren;
- (bool)debugBackfillCompositing;
- (bool)debugDisableFrameUpdates;
- (bool)debugRoundTripLayerStack;
- (bool)debugTintLayers;
- (bool)disableSegmentation;
- (bool)disableSegmentationCache;
- (bool)enableCustomStyles;
- (bool)enableFRCInAssetDetails;
- (bool)enableGreenScreenStyles;
- (bool)includeDebugLayers;
- (long long)infillMode;
- (unsigned long long)livePhotoTabFetchLimit;
- (double)manualGatingLenience;
- (double)parallaxAmount;
- (id)parentSettings;
- (void)performPostSaveActions;
- (long long)primarySort;
- (long long)secondarySort;
- (void)setDebugBackfillCompositing:(bool)arg1;
- (void)setDebugDisableFrameUpdates:(bool)arg1;
- (void)setDebugRoundTripLayerStack:(bool)arg1;
- (void)setDebugTintLayers:(bool)arg1;
- (void)setDefaultValues;
- (void)setDisableSegmentation:(bool)arg1;
- (void)setDisableSegmentationCache:(bool)arg1;
- (void)setEnableCustomStyles:(bool)arg1;
- (void)setEnableFRCInAssetDetails:(bool)arg1;
- (void)setEnableGreenScreenStyles:(bool)arg1;
- (void)setIncludeDebugLayers:(bool)arg1;
- (void)setInfillMode:(long long)arg1;
- (void)setLivePhotoTabFetchLimit:(unsigned long long)arg1;
- (void)setManualGatingLenience:(double)arg1;
- (void)setParallaxAmount:(double)arg1;
- (void)setPrimarySort:(long long)arg1;
- (void)setSecondarySort:(long long)arg1;
- (void)setShortcutsPlaygroundSettings:(id)arg1;
- (void)setSourceMode:(long long)arg1;
- (void)setViewMode:(long long)arg1;
- (id)shortcutsPlaygroundSettings;
- (long long)sourceMode;
- (long long)viewMode;

@end
