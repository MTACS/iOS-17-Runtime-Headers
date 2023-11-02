
@protocol SGSuggestHistoryObserver <NSObject>

@required

- (void)hashesDidChange;
- (void)processNewConfirmOrRejectEventHashes:(NSSet *)arg1;
- (void)processNewConfirmedOrRejectedReminderHashes:(NSSet *)arg1;

@end
