
@interface PXMemoriesRelatedTapToRadarService : PXDiagnosticsService

+ (bool)isServiceAvailableForProviders:(id)arg1;

- (id)_libraryStatDictionary;
- (id)_providerItemsSummary;
- (bool)canProvideConsoleDescription;
- (bool)canProvideContextualViewController;
- (bool)canProvideSettingsViewController;
- (id)collectProviderItemsSummaryAndLibraryStat;
- (id)consoleDescription;
- (id)contextualViewController;
- (id)diagnosticFilesForPeopleContactSuggestionWithError:(id*)arg1;
- (id)parseProviderItemsSummary:(id)arg1 error:(id*)arg2;
- (id)settingsViewController;
- (id)snapshotMemoriesRelatedResults:(id)arg1 error:(id*)arg2;
- (id)tapToRadarURLWithTitle:(id)arg1 descriptionString:(id)arg2;
- (id)title;
- (void)writeErrorsToErrorLog:(id)arg1;
- (id)writeGraphData:(id)arg1 errorsList:(id)arg2;
- (id)writeGraphStatistics:(id)arg1 errorsList:(id)arg2;
- (id)writeLibraryStatistics:(id)arg1 analysisClient:(id)arg2 errorsList:(id)arg3;
- (id)writeMemoriesSummary:(id)arg1 analysisClient:(id)arg2 errorsList:(id)arg3;
- (id)writePeopleContactSuggestionsGraphStatistics:(id)arg1 errorsList:(id)arg2;

@end
