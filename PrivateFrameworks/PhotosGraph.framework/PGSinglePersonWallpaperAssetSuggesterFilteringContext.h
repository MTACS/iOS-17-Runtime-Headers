
@interface PGSinglePersonWallpaperAssetSuggesterFilteringContext : NSObject <NSCopying> {
    double  _absoluteMinimumWallpaperScore;
    bool  _bypassCropScoreCheck;
    double  _maximumCropZoomRatio;
    double  _maximumFaceRoll;
    double  _maximumFaceSize;
    double  _maximumLowLightScore;
    double  _minimumCropScore;
    double  _minimumFaceQuality;
    double  _minimumFaceSize;
    double  _minimumWallpaperScore;
    long long  _orientation;
    bool  _requiresNoBlink;
    bool  _requiresSmile;
    double  _timeIntervalForCandidateDeduping;
}

@property (nonatomic) double absoluteMinimumWallpaperScore;
@property (nonatomic) bool bypassCropScoreCheck;
@property (nonatomic) double maximumCropZoomRatio;
@property (nonatomic) double maximumFaceRoll;
@property (nonatomic) double maximumFaceSize;
@property (nonatomic) double maximumLowLightScore;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) double minimumFaceQuality;
@property (nonatomic) double minimumFaceSize;
@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic) bool requiresNoBlink;
@property (nonatomic) bool requiresSmile;
@property (nonatomic) double timeIntervalForCandidateDeduping;

- (void)_commonInitInOrientation:(long long)arg1;
- (double)absoluteMinimumWallpaperScore;
- (bool)bypassCropScoreCheck;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)initForAmbient;
- (id)initForPeopleInOrientation:(long long)arg1;
- (id)initForTopPeople:(bool)arg1 withDictionary:(id)arg2 orientation:(long long)arg3;
- (id)initForTopPeopleInOrientation:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (double)maximumCropZoomRatio;
- (double)maximumFaceRoll;
- (double)maximumFaceSize;
- (double)maximumLowLightScore;
- (double)minimumCropScore;
- (double)minimumFaceQuality;
- (double)minimumFaceSize;
- (double)minimumWallpaperScore;
- (long long)orientation;
- (bool)requiresNoBlink;
- (bool)requiresSmile;
- (void)setAbsoluteMinimumWallpaperScore:(double)arg1;
- (void)setBypassCropScoreCheck:(bool)arg1;
- (void)setMaximumCropZoomRatio:(double)arg1;
- (void)setMaximumFaceRoll:(double)arg1;
- (void)setMaximumFaceSize:(double)arg1;
- (void)setMaximumLowLightScore:(double)arg1;
- (void)setMinimumCropScore:(double)arg1;
- (void)setMinimumFaceQuality:(double)arg1;
- (void)setMinimumFaceSize:(double)arg1;
- (void)setMinimumWallpaperScore:(double)arg1;
- (void)setRequiresNoBlink:(bool)arg1;
- (void)setRequiresSmile:(bool)arg1;
- (void)setTimeIntervalForCandidateDeduping:(double)arg1;
- (double)timeIntervalForCandidateDeduping;
- (void)updateFilteringContextWithDictionary:(id)arg1;

@end
