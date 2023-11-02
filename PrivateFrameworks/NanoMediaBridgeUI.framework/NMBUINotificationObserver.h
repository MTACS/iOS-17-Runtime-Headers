
@interface NMBUINotificationObserver : NSObject {
    int  _notificationToken;
}

- (void)dealloc;
- (id)initWithNotificationName:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;

@end
