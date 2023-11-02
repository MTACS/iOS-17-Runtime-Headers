
@protocol FCSubscriptionListObserving <NSObject>

@required

- (void)subscriptionList:(FCSubscriptionList *)arg1 didAddSubscriptions:(NSSet *)arg2 changeSubscriptions:(NSSet *)arg3 moveSubscriptions:(NSSet *)arg4 removeSubscriptions:(NSSet *)arg5;

@optional

- (void)subscriptionListDidResetToEmpty:(FCSubscriptionList *)arg1;
- (void)subscriptionListDidStopSyncingRemoteChanges:(FCSubscriptionList *)arg1;
- (void)subscriptionListWillStartSyncingRemoteChanges:(FCSubscriptionList *)arg1;

@end
