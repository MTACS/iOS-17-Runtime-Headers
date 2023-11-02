
@interface AXNotificationObserver : NSObject {
    <AXNotificationObserverDelegate> * _delegate;
    NSArray * _notifications;
    struct __AXObserver { } * _observer;
}

@property (nonatomic) <AXNotificationObserverDelegate> *delegate;
@property (nonatomic, retain) NSArray *notifications;

- (void).cxx_destruct;
- (void)_didObserveNotification:(int)arg1 notificationData:(void*)arg2;
- (void)_registerForAXNotifications:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithNotifications:(id)arg1;
- (id)notifications;
- (void)setDelegate:(id)arg1;
- (void)setNotifications:(id)arg1;

@end
