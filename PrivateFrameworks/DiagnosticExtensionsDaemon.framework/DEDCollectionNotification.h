
@interface DEDCollectionNotification : NSObject

+ (void)beginListeningForNotification;
+ (void)configureEventStream;
+ (void)fireNotificationWithFinishingMove:(long long)arg1;
+ (void)handleDistributedNotification:(id)arg1;
+ (id)log;
+ (void)postNotificationToNotificationCenterForFinishingMove:(long long)arg1;
+ (bool)shouldFireNotificationForTransport:(long long)arg1;

@end
