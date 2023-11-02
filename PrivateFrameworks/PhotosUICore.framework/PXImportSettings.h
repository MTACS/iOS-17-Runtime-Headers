
@interface PXImportSettings : PXSettings {
    long long  _alreadyImportedTruncationMode;
    bool  _alwaysShowCPLOptimizedMessage;
    double  _assetEnumerationBatchInterval;
    unsigned long long  _assetEnumerationBatchSize;
    long long  _assetEnumerationBehavior;
    double  _delayBeforeShowingPreparationAlert;
    bool  _disableAssetDeletion;
    bool  _externalOneUpForceEnable;
    bool  _externalOneUpSimulateDeletionFailure;
    bool  _groupItemsByEXIFDate;
    bool  _hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
    bool  _importSourceSimulationViaDiagnosticsEnabled;
    bool  _lazyLoadAllAssets;
    bool  _loadActualThumbnails;
    bool  _loadRetinaThumbnails;
    bool  _longPressForOneUpInCompactMode;
    bool  _longPressForOneUpInPadSpec;
    bool  _showImportItemFilenames;
    bool  _showNewestItemsInGridUntilScrolled;
    bool  _showProgressTitles;
    bool  _simulateEmptyImportSource;
    bool  _simulateLongDiskSpacePreparation;
    long long  _simulatedBatteryLevel;
    long long  _simulatedDiskSpace;
    bool  _usePhotosOneUp;
    bool  _useThumbnailSizesAsImageSizeHints;
}

@property (nonatomic) long long alreadyImportedTruncationMode;
@property (nonatomic) bool alwaysShowCPLOptimizedMessage;
@property (nonatomic) double assetEnumerationBatchInterval;
@property (nonatomic) unsigned long long assetEnumerationBatchSize;
@property (nonatomic) long long assetEnumerationBehavior;
@property (nonatomic) double delayBeforeShowingPreparationAlert;
@property (nonatomic) bool disableAssetDeletion;
@property (nonatomic) bool externalOneUpForceEnable;
@property (nonatomic) bool externalOneUpSimulateDeletionFailure;
@property (nonatomic) bool groupItemsByEXIFDate;
@property (nonatomic) bool hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
@property (nonatomic) bool importSourceSimulationViaDiagnosticsEnabled;
@property (nonatomic) bool lazyLoadAllAssets;
@property (nonatomic) bool loadActualThumbnails;
@property (nonatomic) bool loadRetinaThumbnails;
@property (nonatomic) bool longPressForOneUpInCompactMode;
@property (nonatomic) bool longPressForOneUpInPadSpec;
@property (nonatomic) bool showImportItemFilenames;
@property (nonatomic) bool showNewestItemsInGridUntilScrolled;
@property (nonatomic) bool showProgressTitles;
@property (nonatomic) bool simulateEmptyImportSource;
@property (nonatomic) bool simulateLongDiskSpacePreparation;
@property (nonatomic) long long simulatedBatteryLevel;
@property (nonatomic) long long simulatedDiskSpace;
@property (nonatomic) bool usePhotosOneUp;
@property (nonatomic) bool useThumbnailSizesAsImageSizeHints;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)sharedInstance;

- (long long)alreadyImportedTruncationMode;
- (bool)alwaysShowCPLOptimizedMessage;
- (double)assetEnumerationBatchInterval;
- (unsigned long long)assetEnumerationBatchSize;
- (long long)assetEnumerationBehavior;
- (double)delayBeforeShowingPreparationAlert;
- (bool)disableAssetDeletion;
- (bool)externalOneUpForceEnable;
- (bool)externalOneUpSimulateDeletionFailure;
- (bool)groupItemsByEXIFDate;
- (bool)hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
- (bool)importSourceSimulationViaDiagnosticsEnabled;
- (bool)lazyLoadAllAssets;
- (bool)loadActualThumbnails;
- (bool)loadRetinaThumbnails;
- (bool)longPressForOneUpInCompactMode;
- (bool)longPressForOneUpInPadSpec;
- (id)parentSettings;
- (void)setAlreadyImportedTruncationMode:(long long)arg1;
- (void)setAlwaysShowCPLOptimizedMessage:(bool)arg1;
- (void)setAssetEnumerationBatchInterval:(double)arg1;
- (void)setAssetEnumerationBatchSize:(unsigned long long)arg1;
- (void)setAssetEnumerationBehavior:(long long)arg1;
- (void)setDefaultValues;
- (void)setDelayBeforeShowingPreparationAlert:(double)arg1;
- (void)setDisableAssetDeletion:(bool)arg1;
- (void)setExternalOneUpForceEnable:(bool)arg1;
- (void)setExternalOneUpSimulateDeletionFailure:(bool)arg1;
- (void)setGroupItemsByEXIFDate:(bool)arg1;
- (void)setHide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem:(bool)arg1;
- (void)setImportSourceSimulationViaDiagnosticsEnabled:(bool)arg1;
- (void)setLazyLoadAllAssets:(bool)arg1;
- (void)setLoadActualThumbnails:(bool)arg1;
- (void)setLoadRetinaThumbnails:(bool)arg1;
- (void)setLongPressForOneUpInCompactMode:(bool)arg1;
- (void)setLongPressForOneUpInPadSpec:(bool)arg1;
- (void)setShowImportItemFilenames:(bool)arg1;
- (void)setShowNewestItemsInGridUntilScrolled:(bool)arg1;
- (void)setShowProgressTitles:(bool)arg1;
- (void)setSimulateEmptyImportSource:(bool)arg1;
- (void)setSimulateLongDiskSpacePreparation:(bool)arg1;
- (void)setSimulatedBatteryLevel:(long long)arg1;
- (void)setSimulatedDiskSpace:(long long)arg1;
- (void)setUsePhotosOneUp:(bool)arg1;
- (void)setUseThumbnailSizesAsImageSizeHints:(bool)arg1;
- (bool)showImportItemFilenames;
- (bool)showNewestItemsInGridUntilScrolled;
- (bool)showProgressTitles;
- (bool)simulateEmptyImportSource;
- (bool)simulateLongDiskSpacePreparation;
- (long long)simulatedBatteryLevel;
- (long long)simulatedDiskSpace;
- (bool)usePhotosOneUp;
- (bool)useThumbnailSizesAsImageSizeHints;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (id)settingsControllerModule;

@end
