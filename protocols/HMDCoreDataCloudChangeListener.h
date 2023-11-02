
@protocol HMDCoreDataCloudChangeListener <NSObject>

@optional

- (void)didDeleteModelWithID:(NSManagedObjectID *)arg1 tombstone:(NSDictionary *)arg2 context:(NSManagedObjectContext *)arg3;
- (void)didInsertOrUpdateModel:(MKFCKModel *)arg1 changedProperties:(NSSet *)arg2;
- (void)willStartListeningWithContext:(NSManagedObjectContext *)arg1;

@end
