
@interface PGWallpaperSuggestionAssetGater : NSObject {
    bool  _coversTracks;
    struct { 
        int numberOfAssetsGated; 
        int numberOfMediaAnalysisRequest; 
        int numberOfValidWallpaperPropertiesRequested; 
        int numberOfInvalidAnalysisVersion; 
        int numberOfFailuresFromNilResult; 
        int numberOfSuccessFromCache; 
        int numberOfFailuresFromCache; 
        int numberOfSuccessFromMediaAnalysisRequests; 
        int numberOfFailuresFromMediaAnalysisRequests; 
    }  _currentGatingStatistics;
    PFWallpaperCompoundDeviceConfiguration * _deviceWallpaperLayoutConfiguration;
    bool  _enableSettlingEffect;
    bool  _isLastGatingCallingMediaAnalysis;
    bool  _isUserInitiated;
    NSObject<OS_os_log> * _loggingConnection;
    VCPMediaAnalysisService * _mediaAnalysisService;
    struct { 
        int numberOfEliminationsThruFeatureDisabled; 
        int numberOfEliminationsThruHardwareUnsupported; 
        int numberOfEliminationsThruResourceAvailability; 
        int numberOfEliminationsThruUnsupportedAdjustments; 
        int numberOfEliminationsThruGenericError; 
        int numberOfEliminationsThruMetadataCheck; 
        int numberOfEliminationsThruStabilization; 
        int numberOfEliminationsThruVideoQuality; 
        int numberOfEliminationsThruMetadataIntegrity; 
        int numberOfEliminationsThruFRC; 
        int numberOfEliminationsThruVideoDecision; 
        int numberOfEliminationsThruLayoutDecision; 
        int numberOfEliminationsThruStillTransition; 
    }  _settlingEffectGatingStatistics;
    unsigned long long  _type;
}

@property (nonatomic) bool coversTracks;
@property (nonatomic, readonly) struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; } currentGatingStatistics;
@property (nonatomic) bool enableSettlingEffect;
@property (nonatomic, readonly) bool isLastGatingCallingMediaAnalysis;
@property (nonatomic) bool isUserInitiated;
@property (nonatomic, readonly) struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; } settlingEffectGatingStatistics;

+ (unsigned long long)_posterClassificationFromAssetGaterType:(unsigned long long)arg1;
+ (id)assetFetchPropertySetsForGating;
+ (unsigned long long)currentWallpaperPropertiesVersion;
+ (int)numberOfFailuresAfterStabilizationFromStatistics:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; })arg1;
+ (double)sydneyMD4FaceQualityFromAsset:(id)arg1;

- (void).cxx_destruct;
- (id)_gateAsset:(id)arg1 wallpaperProperties:(id*)arg2;
- (bool)_hasPetFaceWithWallpaperProperties:(id)arg1;
- (bool)_passesSegmentationWithWallpaperProperties:(id)arg1;
- (bool)_passesSettlingEffectWithWallpaperProperties:(id)arg1;
- (id)_requestAnalysisTypes:(unsigned long long)arg1 asset:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)_requestWallpaperPropertiesForAsset:(id)arg1 error:(id*)arg2;
- (bool)assetIsUsingHeadroom:(id)arg1;
- (bool)cacheExistsForAsset:(id)arg1;
- (void)clearCacheOfAsset:(id)arg1;
- (bool)coversTracks;
- (struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; })currentGatingStatistics;
- (bool)enableSettlingEffect;
- (id)existingSegmentationScoresWithAsset:(id)arg1;
- (id)existingWallpaperPropertiesWithAsset:(id)arg1;
- (id)gateAsset:(id)arg1;
- (id)gateAsset:(id)arg1 hasPetFace:(bool*)arg2;
- (id)gatingResultWithWallpaperProperties:(id)arg1;
- (bool)hasValidAnalysisVersionForAsset:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 loggingConnection:(id)arg2;
- (bool)isLastGatingCallingMediaAnalysis;
- (bool)isUserInitiated;
- (void)logCurrentGatingStatisticsWithPrefix:(id)arg1;
- (void)logCurrentSettlingEffectGatingStatisticsWithPrefix:(id)arg1;
- (bool)persistWallpaperProperties:(id)arg1 ofAsset:(id)arg2 error:(id*)arg3;
- (id)requestAndPersistWallpaperPropertiesForAsset:(id)arg1;
- (id)requestWallpaperPropertiesForAsset:(id)arg1 error:(id*)arg2;
- (void)setCoversTracks:(bool)arg1;
- (void)setEnableSettlingEffect:(bool)arg1;
- (void)setIsUserInitiated:(bool)arg1;
- (struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; })settlingEffectGatingStatistics;
- (id)wallpaperPropertiesFromAnalysisResults:(id)arg1 andAsset:(id)arg2;

@end
