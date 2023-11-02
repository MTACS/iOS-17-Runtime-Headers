
@interface AppStoreKitInternal.UpdateStore : ASDSoftwareUpdatesStore {
    void coalesceUpdateNotifications;
    void notificationQueue;
    void notificationWorkItem;
}

- (void).cxx_destruct;
- (void)broadcastChangeNotificationIfNotCoalescing;
- (void)dealloc;
- (id)init;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)arg1;

@end
