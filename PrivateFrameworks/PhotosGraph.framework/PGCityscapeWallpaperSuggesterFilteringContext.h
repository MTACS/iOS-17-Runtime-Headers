
@interface PGCityscapeWallpaperSuggesterFilteringContext : NSObject <NSCopying> {
    double  _absoluteMinimumWallpaperScore;
    bool  _bypassCropScoreCheck;
    bool  _ignoreClockOverlap;
    double  _maximumCropZoomRatio;
    double  _maximumLowLightScore;
    double  _minimumCropScore;
    double  _minimumWallpaperScore;
    long long  _orientation;
    double  _timeIntervalForCandidateDeduping;
}

@property (nonatomic) double absoluteMinimumWallpaperScore;
@property (nonatomic) bool bypassCropScoreCheck;
@property (nonatomic) bool ignoreClockOverlap;
@property (nonatomic) double maximumCropZoomRatio;
@property (nonatomic) double maximumLowLightScore;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic) double timeIntervalForCandidateDeduping;

- (void)_commonInitInOrientation:(long long)arg1;
- (double)absoluteMinimumWallpaperScore;
- (bool)bypassCropScoreCheck;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)ignoreClockOverlap;
- (id)initForAmbient;
- (id)initForCityscapesInOrientation:(long long)arg1;
- (id)initForTopCityscapes:(bool)arg1 withDictionary:(id)arg2 orientation:(long long)arg3;
- (id)initForTopCityscapesInOrientation:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (double)maximumCropZoomRatio;
- (double)maximumLowLightScore;
- (double)minimumCropScore;
- (double)minimumWallpaperScore;
- (long long)orientation;
- (void)setAbsoluteMinimumWallpaperScore:(double)arg1;
- (void)setBypassCropScoreCheck:(bool)arg1;
- (void)setIgnoreClockOverlap:(bool)arg1;
- (void)setMaximumCropZoomRatio:(double)arg1;
- (void)setMaximumLowLightScore:(double)arg1;
- (void)setMinimumCropScore:(double)arg1;
- (void)setMinimumWallpaperScore:(double)arg1;
- (void)setTimeIntervalForCandidateDeduping:(double)arg1;
- (double)timeIntervalForCandidateDeduping;

@end
