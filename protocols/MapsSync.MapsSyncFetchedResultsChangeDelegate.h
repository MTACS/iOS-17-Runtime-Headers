
@protocol MapsSync.MapsSyncFetchedResultsChangeDelegate

@required

- (void)fetchedResultsDidChangeObjectWithControllerDelegate:(_TtC8MapsSync40MapsSyncFetchedResultsControllerDelegate *)arg1 object:(_TtC8MapsSync16MapsSyncBaseItem *)arg2 indexPath:(NSIndexPath *)arg3 changeType:(unsigned long long)arg4 newIndexPath:(NSIndexPath *)arg5;
- (void)fetchedResultsDidChangeWithControllerDelegate:(_TtC8MapsSync40MapsSyncFetchedResultsControllerDelegate *)arg1;
- (void)fetchedResultsWillChangeWithControllerDelegate:(_TtC8MapsSync40MapsSyncFetchedResultsControllerDelegate *)arg1;

@end
