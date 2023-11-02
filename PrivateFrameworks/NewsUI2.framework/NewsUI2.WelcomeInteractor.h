
@interface NewsUI2.WelcomeInteractor : NSObject <FCAppActivityObserving, FCNetworkReachabilityObserving, TSWelcomeDataManagerTypeDelegate> {
    void appActivityMonitor;
    void dataManager;
    void delegate;
    void feedLoadedPromise;
    void isCloudKitReachablePromise;
    void maximumTimePromise;
    void maximumTimer;
    void minimumTimePromise;
    void minimumTimer;
    void networkReachability;
    void userTypePromise;
}

- (void).cxx_destruct;
- (void)activityObservingApplicationDidBecomeActive;
- (void)dataManager:(id)arg1 error:(long long)arg2;
- (void)dataManager:(id)arg1 userType:(long long)arg2;
- (void)dataManagerFeedPrepared:(id)arg1;
- (id)init;
- (void)networkReachabilityDidChange:(id)arg1;

@end
