
@protocol SBHIconLibraryQueryEngineObserver <NSObject>

@required

- (void)engine:(id <SBHIconLibraryQueryEngine>)arg1 failedToExecuteQuery:(SBHIconLibraryQuery *)arg2 withError:(NSError *)arg3;
- (void)engine:(id <SBHIconLibraryQueryEngine>)arg1 queryResultsWereUpdated:(SBHIconLibraryQueryResult *)arg2;

@end
