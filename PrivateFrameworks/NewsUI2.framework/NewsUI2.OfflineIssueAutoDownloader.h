
@interface NewsUI2.OfflineIssueAutoDownloader : NSObject <FCBundleSubscriptionChangeObserver, FCSubscriptionObserving> {
    void bundleSubscriptionManager;
    void currentIssuesChecker;
    void issueReadingHistory;
    void offlineIssueManager;
    void triggerDeduper;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6;

@end
