
@interface GameCenterUI.GameCenterDataUpdatePresenter : NSObject <GKDaemonProxyDataUpdateDelegate> {
    void onGameCenterDataUpdate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)friendRequestSelected:(id)arg1;
- (id)init;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)refreshFriendContents:(id)arg1;
- (void)setBadgeCount:(long long)arg1 forType:(unsigned long long)arg2;

@end
