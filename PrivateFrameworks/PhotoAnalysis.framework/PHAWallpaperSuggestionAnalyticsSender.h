
@interface PHAWallpaperSuggestionAnalyticsSender : NSObject {
    CPAnalytics * _analytics;
    CLSCurationContext * _curationContext;
    long long  _eligiblePetsCount;
    PGWallpaperSuggestionInformer * _informer;
    PGWallpaperLibraryAnalysisSummary * _libraryAnalysisSummary;
    NSObject<OS_os_log> * _loggingConnection;
    PHPhotoLibrary * _photoLibrary;
    NSSet * _shufflePeopleLocalIdentifiers;
    NSSet * _topPeopleLocalIdentifiers;
    PGManagerWorkingContext * _workingContext;
}

+ (struct { int x1; int x2; int x3; int x4; })ambientSuggestionStatisticsFromSuggestions:(id)arg1;
+ (id)analyticsPayloadForLibraryAnalysisSummary:(id)arg1;
+ (struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; })wallpaperSuggestionStatisticsFromSuggestions:(id)arg1;

- (void).cxx_destruct;
- (id)ambientGenerationSummaryWithGeneratedSuggestionLocalIdentifiers:(id)arg1;
- (id)ambientPeoplePetSummary;
- (id)existingAmbientSuggestionSummary;
- (id)existingWallpaperSuggestionSummary;
- (id)initWithGraphManager:(id)arg1 libraryAnalysisSummary:(id)arg2;
- (void)sendAmbientGenerationSummaryEventWithGeneratedSuggestionLocalIdentifiers:(id)arg1;
- (void)sendRefreshSummaryEventWithPosterConfiguration:(id)arg1;
- (void)sendWallpaperGenerationSummaryEventWithGeneratedSuggestionLocalIdentifiers:(id)arg1;
- (long long)shufflePickerVisiblePeopleCount;
- (id)suggestionFetchOptionsWithLocalIdentifiers:(id)arg1;
- (id)wallpaperGenerationSummaryWithGeneratedSuggestionLocalIdentifiers:(id)arg1;
- (id)wallpaperPeoplePetSummary;

@end
