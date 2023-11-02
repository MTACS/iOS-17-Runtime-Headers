
@protocol PSSearchOperationDelegate <NSObject>

@required

- (void)searchOperation:(PSSearchOperation *)arg1 configureSearchResults:(PSSearchResults *)arg2;
- (NSSet *)searchOperation:(PSSearchOperation *)arg1 filteredEntriesForEntries:(NSSet *)arg2;
- (void)searchOperationDidBegin:(PSSearchOperation *)arg1;
- (void)searchOperationDidCancel:(PSSearchOperation *)arg1;
- (void)searchOperationDidFinish:(PSSearchOperation *)arg1 withResults:(PSSearchResults *)arg2;

@end
