
@interface PEValuesCalculator : NSObject {
    PICompositionController * _compositionController;
    PICompositionController * _compositionControllerForCurrentValues;
    NSObject<OS_dispatch_group> * _computingGeometricValuesGroup;
    NSObject<OS_dispatch_group> * _computingImageValuesGroup;
    PUPhotoEditImageValues * _currentGeometricValues;
    PUPhotoEditImageValues * _currentImageValues;
    <PEValuesCalculatorDelegate> * _delegate;
    PLEditSource * _editSource;
    NSObject<OS_dispatch_queue> * _geometricValuesComputationQueue;
    NSObject<OS_dispatch_queue> * _imageValuesComputationQueue;
    PUPhotoEditImageValues * _initialGeometricValues;
    PUPhotoEditImageValues * _initialImageValues;
    struct { 
        bool enableEnterEditPortraitAutoCalc; 
        bool enableEnterEditCropAutoCalc; 
        bool enableEnterEditPerspectiveAutoCalc; 
        bool enableEnterEditDepthEffectAutoCalc; 
        bool enableEnterEditSmartToneAutoCalc; 
        bool enableEnterEditSmartColorAutoCalc; 
        double autoStraightenMaxAngle; 
        double autoPerspectiveMaxYaw; 
        double autoPerspectiveMaxPitch; 
        double autoPerspectiveMaxAngle; 
        double autoPerspectiveMaxFaceSize; 
        bool autoPerspectiveDisableOnPanos; 
        bool autoPerspectiveDisableOnFrontFacingCameraImages; 
    }  _settings;
    <PEValuesCalculatorSettings> * _settingsDelegate;
    bool  _skipGeometricCalculations;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoFrameTime;
}

@property (nonatomic, retain) PICompositionController *compositionController;
@property (nonatomic) <PEValuesCalculatorDelegate> *delegate;
@property (nonatomic, retain) PLEditSource *editSource;
@property (nonatomic, readonly) bool hasImageValues;
@property (nonatomic) <PEValuesCalculatorSettings> *settingsDelegate;
@property (nonatomic) bool skipGeometricCalculations;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } videoFrameTime;

+ (bool)shouldRunGeometricAutoCalculatorForSource:(id)arg1;

- (void).cxx_destruct;
- (void)_ensureCurrentGeometricValuesAreComputed;
- (void)_ensureCurrentImageValuesAreComputed;
- (void)_ensureInitialGeometricValuesAreComputed;
- (void)_ensureInitialImageValuesAreComputed;
- (bool)_geometricCurrentValuesCacheIsValid;
- (bool)_imageCurrentValuesCacheIsValid;
- (void)_updateSettings;
- (id)apertureValuesWithAccuracy:(long long)arg1;
- (id)autoCropValuesWithAccuracy:(long long)arg1;
- (id)autoPerspectiveValuesWithAccuracy:(long long)arg1;
- (id)compositionController;
- (void)computeAutoEnhanceWithCompletionHandler:(id /* block */)arg1;
- (id)currentEditSource;
- (id)delegate;
- (id)editSource;
- (bool)hasImageValues;
- (id)init;
- (void)invalidate;
- (id)portraitValuesWithAccuracy:(long long)arg1;
- (void)precomputeGeometricValues;
- (void)precomputeImageValues;
- (void)precomputeImageValuesWithCompletion:(id /* block */)arg1;
- (void)precomputeImageValuesWithOptionalCompletion:(id /* block */)arg1;
- (void)setCompositionController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditSource:(id)arg1;
- (void)setSettingsDelegate:(id)arg1;
- (void)setSkipGeometricCalculations:(bool)arg1;
- (void)setVideoFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)settingsDelegate;
- (bool)skipGeometricCalculations;
- (double)smartColorAutoSuggestion;
- (id)smartColorStatisticsWithAccuracy:(long long)arg1;
- (double)smartToneAutoSuggestion;
- (id)smartToneStatisticsWithAccuracy:(long long)arg1;
- (void)updateAdjustmentSmartToneStatistics:(id)arg1 withAccuracy:(long long)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoFrameTime;

@end
