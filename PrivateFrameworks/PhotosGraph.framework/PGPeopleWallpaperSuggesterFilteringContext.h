
@interface PGPeopleWallpaperSuggesterFilteringContext : PGSinglePersonWallpaperAssetSuggesterFilteringContext {
    bool  _favoritePersonsAreVIPs;
    unsigned long long  _minimumNumberOfCandidatesForEligiblePerson;
    long long  _minimumPersonImportance;
    double  _normalizedDeviationForImportantPersons;
    double  _normalizedDeviationForVeryImportantPersons;
}

@property (nonatomic) bool favoritePersonsAreVIPs;
@property (nonatomic) unsigned long long minimumNumberOfCandidatesForEligiblePerson;
@property (nonatomic) long long minimumPersonImportance;
@property (nonatomic) double normalizedDeviationForImportantPersons;
@property (nonatomic) double normalizedDeviationForVeryImportantPersons;

- (void)_commonInitForPeople;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)favoritePersonsAreVIPs;
- (id)initForAmbient;
- (id)initForPeopleInOrientation:(long long)arg1;
- (id)initForTopPeople:(bool)arg1 withDictionary:(id)arg2 orientation:(long long)arg3;
- (id)initForTopPeopleInOrientation:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)minimumNumberOfCandidatesForEligiblePerson;
- (long long)minimumPersonImportance;
- (double)normalizedDeviationForImportantPersons;
- (double)normalizedDeviationForVeryImportantPersons;
- (void)setFavoritePersonsAreVIPs:(bool)arg1;
- (void)setMinimumNumberOfCandidatesForEligiblePerson:(unsigned long long)arg1;
- (void)setMinimumPersonImportance:(long long)arg1;
- (void)setNormalizedDeviationForImportantPersons:(double)arg1;
- (void)setNormalizedDeviationForVeryImportantPersons:(double)arg1;
- (void)updateFilteringContextWithDictionary:(id)arg1;

@end
