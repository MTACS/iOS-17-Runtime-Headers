
@interface MRPlaybackQueueClient : NSObject {
    NSMutableDictionary * _controllers;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_handleApplicationRemovedNotification:(id)arg1;
- (void)_handleOriginRemovedNotification:(id)arg1;
- (void)_handlePlayerPathRemovedNotification:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)existingSubscriptionControllerForPlayerPath:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)subscriptionControllerForPlayerPath:(id)arg1;

@end
