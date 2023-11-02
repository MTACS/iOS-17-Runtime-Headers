
@protocol ICCoreDataIndexerDelegate

@required

- (void)indexer:(ICCoreDataIndexer *)arg1 didChangeContentWithDifference:(NSOrderedCollectionDifference *)arg2 controller:(NSFetchedResultsController *)arg3;

@end
