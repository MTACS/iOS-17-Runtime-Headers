
@interface NewsUI2.PuzzlePrewarmer : NSObject <FCNetworkReachabilityObserving> {
    void bundleSubscriptionManager;
    void configurationManager;
    void featureAvailability;
    void networkReachability;
    void puzzleHistoryService;
    void puzzleService;
}

- (void).cxx_destruct;
- (id)init;
- (void)networkReachabilityDidChange:(id)arg1;

@end
