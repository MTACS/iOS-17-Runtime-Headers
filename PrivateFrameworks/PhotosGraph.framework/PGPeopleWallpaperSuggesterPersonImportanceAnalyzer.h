
@interface PGPeopleWallpaperSuggesterPersonImportanceAnalyzer : NSObject {
    CLSCurationContext * _curationContext;
    NSDate * _earliestDateForBasePersons;
    NSDate * _earliestDateForCandidates;
    bool  _favoritePersonsAreVIPs;
    PGGraph * _graph;
    bool  _hasFavoritedPersons;
    NSDate * _latestLibraryDate;
    NSObject<OS_os_log> * _loggingConnection;
    NSString * _mePersonLocalIdentifier;
    NSMutableDictionary * _momentLocalIdentifiersByPersonLocalIdentifier;
    double  _normalizedDeviationForImportantPersons;
    double  _normalizedDeviationForVeryImportantPersons;
    NSMutableDictionary * _personInformationByPersonLocalIdentifier;
}

@property (nonatomic) bool favoritePersonsAreVIPs;
@property (nonatomic) double normalizedDeviationForImportantPersons;
@property (nonatomic) double normalizedDeviationForVeryImportantPersons;

- (void).cxx_destruct;
- (bool)_isVeryImportantPersonWithPersonNode:(id)arg1;
- (void)computePersonImportancesWithProgress:(id /* block */)arg1;
- (bool)favoritePersonsAreVIPs;
- (void)gatherMomentInformationWithProgress:(id /* block */)arg1;
- (void)gatherPersonInformationWithProgress:(id /* block */)arg1;
- (id)initWithGraph:(id)arg1 curationContext:(id)arg2 loggingConnection:(id)arg3;
- (double)normalizedDeviationForImportantPersons;
- (double)normalizedDeviationForVeryImportantPersons;
- (id)personInformationsWithProgress:(id /* block */)arg1;
- (void)setFavoritePersonsAreVIPs:(bool)arg1;
- (void)setNormalizedDeviationForImportantPersons:(double)arg1;
- (void)setNormalizedDeviationForVeryImportantPersons:(double)arg1;

@end
