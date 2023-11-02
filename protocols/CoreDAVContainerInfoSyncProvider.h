
@protocol CoreDAVContainerInfoSyncProvider <CoreDAVTaskGroupDelegate>

@required

- (void)containerInfoSyncTask:(CoreDAVContainerInfoSyncTaskGroup *)arg1 completedWithNewSyncToken:(NSString *)arg2 error:(NSError *)arg3;
- (void)containerInfoSyncTask:(CoreDAVContainerInfoSyncTaskGroup *)arg1 retrievedAddedOrModifiedContainers:(NSArray *)arg2 removedContainerURLs:(NSArray *)arg3;

@end
