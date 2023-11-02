
@protocol AVTCoreDataCloudKitMirroringHandler

@required

- (<AVTCoreDataCloudKitMirroringHandlerDelegate> *)delegate;
- (void)exportChangesWithManagedObjectContext:(void *)arg1 discretionary:(void *)arg2 workQueue:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSManagedObjectContext *, bool, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)importChangesWithManagedObjectContext:(void *)arg1 discretionary:(void *)arg2 workQueue:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSManagedObjectContext *, bool, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resetZoneWithManagedObjectContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSManagedObjectContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)scheduleExportChangesWithManagedObjectContext:(void *)arg1 discretionary:(void *)arg2 workQueue:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSManagedObjectContext *, bool, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setDelegate:(id <AVTCoreDataCloudKitMirroringHandlerDelegate>)arg1;
- (void)startObservingResetSyncWithNotificationCenter:(NSNotificationCenter *)arg1;

@end
