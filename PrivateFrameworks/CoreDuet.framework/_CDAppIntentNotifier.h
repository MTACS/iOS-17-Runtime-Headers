
@interface _CDAppIntentNotifier : NSObject <_CDXPCEventPublisherDelegate> {
    BMIntentStream * _intentStream;
    bool  _isRootProcess;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _subscribers;
    _CDXPCEventPublisher * _xpcPublisher;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_publishXPCEvent:(id)arg1 uid:(unsigned int)arg2;
- (void)addSubscriber:(id)arg1;
- (void)handleXPCNotificationEvent:(id)arg1;
- (id)init;
- (void)publishXPCEventForAppIntents:(id)arg1 uid:(unsigned int)arg2;
- (void)publishXPCEventForDeletedIntentGroupIdentifiers:(id)arg1 bundleID:(id)arg2 uid:(unsigned int)arg3;
- (void)publishXPCEventForDeletedIntentIdentifiers:(id)arg1 bundleID:(id)arg2 uid:(unsigned int)arg3;
- (void)removeSubscriberWithToken:(unsigned long long)arg1 streamName:(id)arg2;

@end
