
@interface MGNotificationRegistration : NSObject {
    id /* block */  _block;
    bool  _deliverNotifications;
    NSMutableDictionary * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _requestedRegistrations;
}

- (void)cancel;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 block:(id /* block */)arg2;
- (bool)registerForNotification:(int)arg1 argument:(const char *)arg2 question:(id)arg3;
- (bool)start;

@end
