
@interface PUTopPeopleWallpaperSuggesterFilteringContext : NSObject {
    bool  _favoritePersonsAreVIPs;
    double  _maximumFaceRoll;
    double  _maximumFaceSize;
    double  _minimumCropScore;
    double  _minimumFaceQuality;
    double  _minimumFaceSize;
    unsigned long long  _minimumNumberOfCandidatesForEligiblePerson;
    double  _minimumWallpaperScore;
    double  _normalizedDeviationForImportantPersons;
    double  _normalizedDeviationForVeryImportantPersons;
    bool  _requiresNoBlink;
    bool  _requiresOutdoor;
    bool  _requiresSmile;
    double  _timeIntervalForCandidateDeduping;
}

@property (nonatomic) bool favoritePersonsAreVIPs;
@property (nonatomic) double maximumFaceRoll;
@property (nonatomic) double maximumFaceSize;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) double minimumFaceQuality;
@property (nonatomic) double minimumFaceSize;
@property (nonatomic) unsigned long long minimumNumberOfCandidatesForEligiblePerson;
@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic) double normalizedDeviationForImportantPersons;
@property (nonatomic) double normalizedDeviationForVeryImportantPersons;
@property (nonatomic) bool requiresNoBlink;
@property (nonatomic) bool requiresOutdoor;
@property (nonatomic) bool requiresSmile;
@property (nonatomic) double timeIntervalForCandidateDeduping;

- (id)dictionaryRepresentation;
- (bool)favoritePersonsAreVIPs;
- (id)init;
- (double)maximumFaceRoll;
- (double)maximumFaceSize;
- (double)minimumCropScore;
- (double)minimumFaceQuality;
- (double)minimumFaceSize;
- (unsigned long long)minimumNumberOfCandidatesForEligiblePerson;
- (double)minimumWallpaperScore;
- (double)normalizedDeviationForImportantPersons;
- (double)normalizedDeviationForVeryImportantPersons;
- (bool)requiresNoBlink;
- (bool)requiresOutdoor;
- (bool)requiresSmile;
- (void)setFavoritePersonsAreVIPs:(bool)arg1;
- (void)setMaximumFaceRoll:(double)arg1;
- (void)setMaximumFaceSize:(double)arg1;
- (void)setMinimumCropScore:(double)arg1;
- (void)setMinimumFaceQuality:(double)arg1;
- (void)setMinimumFaceSize:(double)arg1;
- (void)setMinimumNumberOfCandidatesForEligiblePerson:(unsigned long long)arg1;
- (void)setMinimumWallpaperScore:(double)arg1;
- (void)setNormalizedDeviationForImportantPersons:(double)arg1;
- (void)setNormalizedDeviationForVeryImportantPersons:(double)arg1;
- (void)setRequiresNoBlink:(bool)arg1;
- (void)setRequiresOutdoor:(bool)arg1;
- (void)setRequiresSmile:(bool)arg1;
- (void)setTimeIntervalForCandidateDeduping:(double)arg1;
- (double)timeIntervalForCandidateDeduping;

@end
