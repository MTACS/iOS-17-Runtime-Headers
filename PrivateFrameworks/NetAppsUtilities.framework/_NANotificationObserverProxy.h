
@interface _NANotificationObserverProxy : _NAObserverProxy {
    NSString * _notificationName;
    id  _notificationObserver;
    id /* block */  _observerBlock;
    NSOperationQueue * _observerQueue;
}

@property (nonatomic, readonly, copy) NSString *notificationName;
@property (nonatomic, readonly, copy) id /* block */ observerBlock;
@property (nonatomic, readonly) NSOperationQueue *observerQueue;

- (void).cxx_destruct;
- (id)initWithWeakObserver:(id)arg1 notificationName:(id)arg2 observerQueue:(id)arg3 observerBlock:(id /* block */)arg4;
- (void)invalidate;
- (id)notificationName;
- (id /* block */)observerBlock;
- (id)observerQueue;
- (void)performObserverBlock;

@end
