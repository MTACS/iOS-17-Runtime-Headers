
@interface AppStoreKitInternal.GameCenterFriendRequestCoordinator : NSObject <GKDaemonProxyDataUpdateDelegate> {
    void currentFriendRequestCount;
    void onFriendRequestCountDidUpdate;
}

- (void).cxx_destruct;
- (void)accountsDidChangeWithNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;

@end
