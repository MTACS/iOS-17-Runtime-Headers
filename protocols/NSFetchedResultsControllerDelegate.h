
@protocol NSFetchedResultsControllerDelegate <NSObject>

@optional

- (void)controller:(NSFetchedResultsController *)arg1 didChangeContentWithDifference:(NSOrderedCollectionDifference *)arg2;
- (void)controller:(NSFetchedResultsController *)arg1 didChangeContentWithSnapshot:(NSDiffableDataSourceSnapshot *)arg2;
- (void)controller:(NSFetchedResultsController *)arg1 didChangeObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(NSIndexPath *)arg5;
- (void)controller:(NSFetchedResultsController *)arg1 didChangeSection:(id <NSFetchedResultsSectionInfo>)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (NSString *)controller:(NSFetchedResultsController *)arg1 sectionIndexTitleForSectionName:(NSString *)arg2;
- (void)controllerDidChangeContent:(NSFetchedResultsController *)arg1;
- (void)controllerWillChangeContent:(NSFetchedResultsController *)arg1;

@end
