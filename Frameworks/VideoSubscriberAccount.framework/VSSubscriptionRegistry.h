
@interface VSSubscriptionRegistry : NSObject <VSSubscriptionServiceProtocol> {
    VSSubscriptionPersistentContainer * _persistentContainer;
    VSSubscriptionPredicateFactory * _predicateFactory;
    VSRemoteNotifier * _remoteNotifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSSubscriptionPersistentContainer *persistentContainer;
@property (nonatomic, retain) VSSubscriptionPredicateFactory *predicateFactory;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fetchRequest;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_performBlock:(id /* block */)arg1;
- (id)_predicateForCurrentConnectionWithRequestKind:(long long)arg1;
- (id)_predicateForPersistentAttributesOfSubscriptions:(id)arg1 withEntity:(id)arg2 forFiltering:(bool)arg3;
- (bool)_saveChangesToContext:(id)arg1;
- (long long)_saveChangesToContext:(id)arg1 withDate:(id)arg2;
- (id)_securityTaskForCurrentConnection;
- (void)_sendRemoteNotification;
- (id)_subscriptionEntity;
- (void)dealloc;
- (void)fetchActiveSubscriptionsWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)persistentContainer;
- (id)predicateFactory;
- (void)registerSubscription:(id)arg1;
- (void)registerSubscription:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)remoteNotifier;
- (void)removeSubscriptions:(id)arg1;
- (void)removeSubscriptions:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setPersistentContainer:(id)arg1;
- (void)setPredicateFactory:(id)arg1;
- (void)setRemoteNotifier:(id)arg1;

@end
