
@interface SBHIconLibraryPredicateQueryEngine : SBHIconLibraryAbstractQueryEngine {
    SBHIconLibraryQueryContext * _currentlyRunningQueryContext;
}

- (void).cxx_destruct;
- (void)_processingQueue_teardownQueryContext:(id)arg1;
- (void)executeQuery:(id)arg1;

@end
