
@protocol VUIMediaEntitiesFetchControllerDelegate <NSObject>

@required

- (void)controller:(VUIMediaEntitiesFetchController *)arg1 fetchRequests:(NSArray *)arg2 didCompleteWithResult:(VUIMediaEntitiesFetchControllerResult *)arg3;
- (void)controller:(VUIMediaEntitiesFetchController *)arg1 fetchRequests:(NSArray *)arg2 didFailWithError:(NSError *)arg3;

@optional

- (bool)controllerShouldFetchForContentsChange:(VUIMediaEntitiesFetchController *)arg1;

@end
