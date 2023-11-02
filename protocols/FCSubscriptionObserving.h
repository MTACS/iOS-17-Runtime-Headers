
@protocol FCSubscriptionObserving <NSObject>

@optional

- (void)subscriptionController:(FCSubscriptionController *)arg1 didAddTags:(NSSet *)arg2 changeTags:(NSSet *)arg3 moveTags:(NSSet *)arg4 removeTags:(NSSet *)arg5 subscriptionType:(unsigned long long)arg6;
- (void)subscriptionController:(FCSubscriptionController *)arg1 didFindTagsWithNotificationSupport:(NSSet *)arg2;
- (void)subscriptionControllerDidResetToEmpty:(FCSubscriptionController *)arg1;
- (void)subscriptionControllerDidStopSyncingRemoteChanges:(FCSubscriptionController *)arg1;
- (void)subscriptionControllerWillStartSyncingRemoteChanges:(FCSubscriptionController *)arg1;

@end
