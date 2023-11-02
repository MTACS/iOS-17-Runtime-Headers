
@protocol PSSearchIndexOperationDelegate <PSSpecifierObserver>

@required

- (void)searchIndexOperation:(PSSearchIndexOperation *)arg1 didFindSpecifierDataSource:(id <PSSpecifierDataSource>)arg2;
- (void)searchIndexOperationDidFinish:(PSSearchIndexOperation *)arg1 searchEntries:(NSArray *)arg2;

@optional

- (void)searchIndexOperationDidCancel:(PSSearchIndexOperation *)arg1;

@end
