
@protocol PLManagedObjectContextPTPNotificationDelegate <NSObject>

@required

- (void)managedObjectContext:(PLManagedObjectContext *)arg1 libraryChangedWithInsertedAssetIDs:(NSArray *)arg2 deletedAssetIDs:(NSArray *)arg3 changedAssetIDs:(NSArray *)arg4 adjustedAssetIDs:(NSArray *)arg5;

@end
