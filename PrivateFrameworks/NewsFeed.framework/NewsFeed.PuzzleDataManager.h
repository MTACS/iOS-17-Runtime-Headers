
@interface NewsFeed.PuzzleDataManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void bundleSubscriptionManager;
    void delegate;
    void puzzle;
    void puzzleHistoryService;
    void puzzleNotificationAutoEnableManager;
    void puzzleProgressSaver;
    void puzzleService;
    void puzzleTypeSettings;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end
