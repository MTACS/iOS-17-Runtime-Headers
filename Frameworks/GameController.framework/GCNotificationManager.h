
@interface GCNotificationManager : NSObject {
    bool  _isPermissionGranted;
    UNUserNotificationCenter * _userNotificationCenter;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)requestNotification:(id)arg1 withReply:(id /* block */)arg2;
- (void)requestNotificationImpl:(id)arg1 withReply:(id /* block */)arg2;

@end
