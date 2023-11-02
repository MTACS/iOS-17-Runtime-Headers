
@interface FABroadcaster : NSObject

+ (void)_broadcastNotificationName:(id)arg1 userInfo:(id)arg2;
+ (void)broadcastFamilyChangedNotification;
+ (void)broadcastFamilyMarqueeChangedNotification;
+ (void)broadcastRemoteUIWillDismissNotification:(id)arg1;
+ (void)broadcastServicesChangedNotification;

@end
