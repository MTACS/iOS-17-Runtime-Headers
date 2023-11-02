
@interface AATrustedContactNotificationPublisher : NSObject

+ (void)postInheritanceContactChangedNotification;
+ (void)postRecoveryContactChangedNotification;

@end
