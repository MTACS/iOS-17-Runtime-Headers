
@interface PGSettlingEffectWallpaperSuggesterFilteringContext : NSObject {
    bool  _ignoreClockOverlap;
    double  _maximumCropZoomRatio;
    double  _maximumLowLightScore;
    double  _minimumCropScore;
    double  _minimumWallpaperScore;
    long long  _orientation;
    double  _timeIntervalForCandidateDeduping;
}

@property (nonatomic) bool ignoreClockOverlap;
@property (nonatomic) double maximumCropZoomRatio;
@property (nonatomic) double maximumLowLightScore;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic) double timeIntervalForCandidateDeduping;

+ (double)minimumSettlingEffectScoreForSuggestionSubtype:(unsigned short)arg1 mediaAnalysisVersion:(unsigned long long)arg2;
+ (bool)shouldRunSettlingEffectForAsset:(id)arg1 subtype:(unsigned short)arg2;

- (void)_commonInitInOrientation:(long long)arg1;
- (bool)ignoreClockOverlap;
- (id)initInOrientation:(long long)arg1;
- (double)maximumCropZoomRatio;
- (double)maximumLowLightScore;
- (double)minimumCropScore;
- (double)minimumWallpaperScore;
- (long long)orientation;
- (void)setIgnoreClockOverlap:(bool)arg1;
- (void)setMaximumCropZoomRatio:(double)arg1;
- (void)setMaximumLowLightScore:(double)arg1;
- (void)setMinimumCropScore:(double)arg1;
- (void)setMinimumWallpaperScore:(double)arg1;
- (void)setTimeIntervalForCandidateDeduping:(double)arg1;
- (double)timeIntervalForCandidateDeduping;

@end
