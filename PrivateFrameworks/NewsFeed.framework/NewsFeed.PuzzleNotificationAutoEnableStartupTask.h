
@interface NewsFeed.PuzzleNotificationAutoEnableStartupTask : NSObject <FCBundleSubscriptionChangeObserver> {
    void bundleSubscriptionManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  executionPhase;
    void featureAvailability;
    void notificationController;
    void userInfo;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (id)init;

@end
