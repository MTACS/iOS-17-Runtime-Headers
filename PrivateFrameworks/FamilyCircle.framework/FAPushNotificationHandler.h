
@interface FAPushNotificationHandler : NSObject

+ (id)sharedHandler;

- (void)didReceivePushNotificationWithPayload:(id)arg1;

@end
