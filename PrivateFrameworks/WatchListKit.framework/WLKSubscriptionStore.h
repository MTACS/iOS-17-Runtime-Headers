
@interface WLKSubscriptionStore : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    WLKSubscriptionData * _subscriptionData;
    int  _subscriptionSyncSubscriptionDataDidChangeNotificationToken;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_connection;
- (bool)_isSubscriptionSyncInProgress;
- (void)_setIsSubscriptionSyncInProgress:(bool)arg1;
- (id)cachedSubscriptionData;
- (void)dealloc;
- (void)fetchSubscriptionData:(bool)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)refreshSubscriptionDataIfNeeded;

@end
