
@protocol NNMKSyncStateManagerDelegate <NSObject>

@required

- (void)syncStateManager:(void *)arg1 handleForwardForNotification:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <NNMKSyncStateManager> *, UNNotification *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)syncStateManagerDidBeginSyncSession:(id <NNMKSyncStateManager>)arg1 syncSessionType:(NSString *)arg2 syncSessionIdentifier:(NSString *)arg3;
- (void)syncStateManagerDidChangePairedDevice:(id <NNMKSyncStateManager>)arg1;
- (void)syncStateManagerDidInvalidateSyncSession:(id <NNMKSyncStateManager>)arg1 syncSessionIdentifier:(NSString *)arg2;
- (void)syncStateManagerDidUnpair:(id <NNMKSyncStateManager>)arg1;
- (bool)syncStateManagerShouldAddFavoriteSubsectionForMailboxId:(NSString *)arg1;

@end
