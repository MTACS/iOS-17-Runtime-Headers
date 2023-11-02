
@interface ICInAppMessageUserNotificationCoordinator : NSObject

+ (id)_amsPushHandler;
+ (id)_centerForBundleIdentifier:(id)arg1;
+ (id)_musicCenter;
+ (void)addBadgeIconForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)removeBadgeIconForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)removeNotificationWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2;
+ (bool)scheduleNotificationWithPayload:(id)arg1 forBundleIdentifier:(id)arg2;

@end
