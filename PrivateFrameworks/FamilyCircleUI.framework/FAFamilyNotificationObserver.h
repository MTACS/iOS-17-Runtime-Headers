
@interface FAFamilyNotificationObserver : NSObject {
    id /* block */  _notificationHandler;
    bool  _observing;
}

+ (id)familyNotificationObserverWithNotificationHandler:(id /* block */)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_didReceiveNotification;
- (id)_initWithNotificationHandler:(id /* block */)arg1;
- (void)_startObserving;
- (void)dealloc;
- (id)init;
- (void)stopObserving;

@end
