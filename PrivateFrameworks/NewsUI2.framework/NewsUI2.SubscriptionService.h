
@interface NewsUI2.SubscriptionService : NSObject <FCSubscriptionObserving> {
    void bundleSubscriptionManager;
    void notificationService;
    void observers;
    void purchaseController;
    void pushNotificationDataManager;
    void subscriptionController;
    void tagService;
}

- (void).cxx_destruct;
- (void)handlePurchaseAddedNotificationWithNotification:(id)arg1;
- (void)handlePurchaseRemovedNotificationWithNotification:(id)arg1;
- (id)init;
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6;
- (void)subscriptionController:(id)arg1 didFindTagsWithNotificationSupport:(id)arg2;

@end
