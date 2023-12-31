
@interface ICUserNotificationManager : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMapTable * _contextForUserNotification;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_handleCallbackForUserNotification:(struct __CFUserNotification { }*)arg1 responseFlags:(unsigned long long)arg2;
- (void)displayUserNotification:(struct __CFUserNotification { }*)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;

@end
