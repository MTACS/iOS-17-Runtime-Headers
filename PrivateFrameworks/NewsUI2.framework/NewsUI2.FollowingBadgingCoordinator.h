
@interface NewsUI2.FollowingBadgingCoordinator : NSObject <FCReadingHistoryObserving, FCReadingListObserving, FCUserInfoObserving> {
    void delegate;
    void readingHistory;
    void readingList;
    void sharedItemManager;
    void userInfo;
}

- (void).cxx_destruct;
- (id)init;
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;
- (void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4;
- (void)userInfoDidChangeDateLastViewedSaved:(id)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeDateLastViewedSharedWithYou:(id)arg1 fromCloud:(bool)arg2;

@end
