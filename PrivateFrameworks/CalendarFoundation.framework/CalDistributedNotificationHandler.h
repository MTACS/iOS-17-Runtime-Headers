
@interface CalDistributedNotificationHandler : NSObject {
    id  _observer;
    SEL  _selector;
}

@property (readonly) id observer;

- (void).cxx_destruct;
- (bool)handleNotification:(id)arg1;
- (id)initWithObserver:(id)arg1 selector:(SEL)arg2;
- (id)observer;

@end
