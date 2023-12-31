
@interface AVTDisabledMirroringHandler : NSObject <AVTCoreDataCloudKitMirroringHandler>

@property (nonatomic) <AVTCoreDataCloudKitMirroringHandlerDelegate> *delegate;

- (id)delegate;
- (void)exportChangesWithManagedObjectContext:(id)arg1 discretionary:(bool)arg2 workQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)importChangesWithManagedObjectContext:(id)arg1 discretionary:(bool)arg2 workQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)resetZoneWithManagedObjectContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)scheduleExportChangesWithManagedObjectContext:(id)arg1 discretionary:(bool)arg2 workQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)scheduleImportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)startObservingResetSyncWithNotificationCenter:(id)arg1;

@end
