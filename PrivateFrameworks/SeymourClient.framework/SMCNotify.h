
@interface SMCNotify : NSObject

+ (void)cancelToken:(int)arg1;
+ (int)invalidToken;
+ (void)postNotificationName:(const char *)arg1;
+ (int)registerNotification:(const char *)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
+ (bool)tokenIsValid:(int)arg1;

@end
