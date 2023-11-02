
@interface PGPetWallpaperSuggesterFilteringContext : NSObject <NSCopying> {
    bool  _bypassCropScoreCheck;
    bool  _ignoreClockOverlap;
    double  _maximumCropZoomRatio;
    double  _maximumFaceSize;
    double  _maximumLowLightScore;
    double  _minimumCropScore;
    double  _minimumFaceSize;
    double  _minimumWallpaperScore;
    long long  _orientation;
    double  _timeIntervalForCandidateDeduping;
}

@property (nonatomic) bool bypassCropScoreCheck;
@property (nonatomic) bool ignoreClockOverlap;
@property (nonatomic) double maximumCropZoomRatio;
@property (nonatomic) double maximumFaceSize;
@property (nonatomic) double maximumLowLightScore;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) double minimumFaceSize;
@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic) double timeIntervalForCandidateDeduping;

- (void)_commonInitWithOrientation:(long long)arg1;
- (bool)bypassCropScoreCheck;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)ignoreClockOverlap;
- (id)initForAmbient;
- (id)initForPetsInOrientation:(long long)arg1;
- (id)initForTopPets:(bool)arg1 withDictionary:(id)arg2 orientation:(long long)arg3;
- (id)initForTopPetsInOrientation:(long long)arg1;
- (double)maximumCropZoomRatio;
- (double)maximumFaceSize;
- (double)maximumLowLightScore;
- (double)minimumCropScore;
- (double)minimumFaceSize;
- (double)minimumWallpaperScore;
- (long long)orientation;
- (void)setBypassCropScoreCheck:(bool)arg1;
- (void)setIgnoreClockOverlap:(bool)arg1;
- (void)setMaximumCropZoomRatio:(double)arg1;
- (void)setMaximumFaceSize:(double)arg1;
- (void)setMaximumLowLightScore:(double)arg1;
- (void)setMinimumCropScore:(double)arg1;
- (void)setMinimumFaceSize:(double)arg1;
- (void)setMinimumWallpaperScore:(double)arg1;
- (void)setTimeIntervalForCandidateDeduping:(double)arg1;
- (double)timeIntervalForCandidateDeduping;

@end
