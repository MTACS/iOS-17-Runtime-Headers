
@interface AMSRemoteNotification : NSObject

+ (id)_sharedPushHandler;
+ (void)handleNotification:(id)arg1;
+ (bool)shouldHandleNotification:(id)arg1;

@end
