
@interface AMSDarwinNotificationObserver : NSObject {
    struct __CFString { } * _notificationName;
    id /* block */  _observerBlock;
}

@property (nonatomic, readonly) struct __CFString { }*notificationName;
@property (copy) id /* block */ observerBlock;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNotificationName:(struct __CFString { }*)arg1 additionalBehavior:(long long)arg2;
- (struct __CFString { }*)notificationName;
- (id /* block */)observerBlock;
- (void)setObserverBlock:(id /* block */)arg1;

@end
