
@interface CACAXNotificationObserver : NSObject {
    <CACAXNotificationObserverDelegate> * _delegate;
    NSArray * _notifications;
    struct __AXObserver { } * _observer;
}

@property (nonatomic) <CACAXNotificationObserverDelegate> *delegate;
@property (nonatomic, readonly) NSArray *notifications;

- (void).cxx_destruct;
- (void)_didObserveNotification:(int)arg1 notificationData:(void*)arg2;
- (id)delegate;
- (id)initWithNotifications:(id)arg1;
- (id)notifications;
- (void)setDelegate:(id)arg1;

@end
