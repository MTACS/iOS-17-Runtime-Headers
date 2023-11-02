
@interface CRXUNotificationHandler : NSObject {
    id /* block */  _block;
    int  _notificationToken;
    CRXUDispatchQueue * _queue;
    CRXUTimer * _timer;
}

- (void).cxx_destruct;
- (void)handleNotification:(id)arg1;
- (void)handleTimer:(id)arg1;
- (id)initWithNotification:(id)arg1 timeout:(double)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (void)invalidate;

@end
