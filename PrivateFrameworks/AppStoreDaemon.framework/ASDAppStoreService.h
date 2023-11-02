
@interface ASDAppStoreService : NSObject <ASDServiceProvider> {
    NSDictionary * _badges;
    int  _badgesChangedForAppStoreNotificationToken;
    int  _badgesChangedNotificationToken;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    <ASDAppStoreChangedObserver> * _observer;
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property <ASDAppStoreChangedObserver> *observer;
@property (readonly) Class superclass;

+ (id)defaultService;
+ (id)interface;

- (void).cxx_destruct;
- (void)addBadgeIDs:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)allBadgeIDsWithReplyHandler:(id /* block */)arg1;
- (void)allBadgeMetricsWithReplyHandler:(id /* block */)arg1;
- (void)badgeCountWithReplyHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (void)launchAppStoreWithURL:(id)arg1 withReplyHandler:(id /* block */)arg2;
- (id)observer;
- (void)reloadWidgetOnConnectivityToEndpoint:(id)arg1 parameters:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)removeAllBadgeIDsWithReplyHandler:(id /* block */)arg1;
- (void)removeBadgeIDs:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)removeMetricsForBadgeIDs:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)setObserver:(id)arg1;

@end
