
@interface _CDInteractionStoreNotifier : NSObject <_CDXPCEventPublisherDelegate> {
    _CDXPCEventPublisher * _interactionDeletedEventPublisher;
    _CDXPCEventPublisher * _interactionRecordedEventPublisher;
    NSMutableDictionary * _interactionStoreDeletedEventSubscribersByToken;
    NSMutableDictionary * _interactionStoreRecordedEventSubscribersByToken;
    bool  _isRootProcess;
    int  _notifierToken;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addSubscriber:(id)arg1;
- (void)dealloc;
- (void)deleteAll;
- (void)deleted:(id)arg1;
- (id)filterInteractionsForUser:(id)arg1;
- (void)handleXPCNotificationEvent:(id)arg1;
- (id)init;
- (void)postPackedMechanisms:(unsigned long long)arg1;
- (void)publishDeletedXPCEvent:(id)arg1;
- (void)publishRecordedXPCEvent:(id)arg1;
- (void)recorded:(id)arg1;
- (void)removeSubscriberWithToken:(unsigned long long)arg1 streamName:(id)arg2;
- (void)resume;
- (void)suspend;

@end
