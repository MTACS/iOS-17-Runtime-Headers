
@interface SBHIconLibrarySpotlightQueryEngine : SBHIconLibraryAbstractQueryEngine {
    SBHIconLibraryQueryContext * _currentlyRunningQueryContext;
}

- (void).cxx_destruct;
- (bool)_processingQueue_isBundleIdentifierValid:(id)arg1 iconLibraryQueryContext:(id)arg2;
- (void)_processingQueue_markBundleIdentifiers:(id)arg1 iconLibraryQueryContext:(id)arg2;
- (void)_processingQueue_noteQueryResultsWereUpdated:(id)arg1 iconLibraryQueryContext:(id)arg2 notifyDelegate:(bool)arg3;
- (id /* block */)_processingQueue_sortComperatorForQueryContext:(id)arg1;
- (void)_processingQueue_teardownQueryContext:(id)arg1;
- (void)_processingQueue_unmarkBundleIdentifiers:(id)arg1 iconLibraryQueryContext:(id)arg2;
- (void)_processingQueue_updateQueryRelevancyScores:(id)arg1 iconLibraryQueryContext:(id)arg2;
- (id)_relevancyQueryForLibraryQuery:(id)arg1;
- (id)_searchQueryForIconLibraryQuery:(id)arg1;
- (void)_teardownCSSearchQuery:(id)arg1;
- (void)dealloc;
- (void)executeQuery:(id)arg1;

@end
