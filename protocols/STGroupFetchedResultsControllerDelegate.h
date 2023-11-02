
@protocol STGroupFetchedResultsControllerDelegate <NSObject>

@optional

- (void)groupResultsController:(STGroupFetchedResultsController *)arg1 didChangeResultsForRequest:(STFetchResultsRequest *)arg2 objectID:(NSManagedObjectID *)arg3 changeType:(unsigned long long)arg4;
- (void)groupResultsControllerDidChangeContents:(STGroupFetchedResultsController *)arg1;

@end
