
@protocol WBSCloudHistoryPushAgent <NSObject>

@required

- (void)acknowledgePendingPushNotifications;
- (void)clearAcknowledgedPushNotifications;
- (void)getPushNotifications:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)queryMemoryFootprint:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSMemoryFootprint *, NSError *, void*

@end
