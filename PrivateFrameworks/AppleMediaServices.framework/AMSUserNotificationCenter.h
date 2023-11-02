
@interface AMSUserNotificationCenter : NSObject {
    <AMSUserNotificationStrategy> * _strategy;
}

@property (nonatomic, readonly) <AMSUserNotificationStrategy> *strategy;

+ (Class)_determineStrategyForBundleId:(id)arg1;
+ (id)activeNotificationsWithCenterBundleId:(id)arg1;
+ (bool)badgeBundleId:(id)arg1 badgeId:(id)arg2 enabled:(bool)arg3 error:(id*)arg4;
+ (id)postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3;
+ (id)removeNotification:(id)arg1 centerBundleId:(id)arg2;
+ (id)removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3 scheduledOnly:(bool)arg4;

- (void).cxx_destruct;
- (id)strategy;

@end
