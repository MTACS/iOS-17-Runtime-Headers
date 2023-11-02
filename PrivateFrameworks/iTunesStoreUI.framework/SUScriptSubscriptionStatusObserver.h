
@interface SUScriptSubscriptionStatusObserver : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    SUScriptSubscriptionStatusResponse * _lastKnownSubscriptionStatusResponse;
    ICMusicSubscriptionStatusMonitor * _subscriptionStatusMonitor;
    <NSCopying> * _subscriptionStatusMonitorObservationToken;
}

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)_updateWithSubscriptionStatus:(id)arg1;
- (void)dealloc;
- (id)init;

@end
