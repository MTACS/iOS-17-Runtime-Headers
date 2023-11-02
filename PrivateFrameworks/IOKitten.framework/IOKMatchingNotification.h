
@interface IOKMatchingNotification : NSObject {
    id /* block */  _handler;
    IOKIterator * _iterator;
    IOKMatchingNotificationRef * _notificationRef;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) IOKIterator *iterator;
@property (nonatomic, readonly) IOKMatchingNotificationRef *notificationRef;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)handler;
- (id)init;
- (id)iterator;
- (id)notificationRef;
- (void)primeNotification;
- (id)queue;
- (void)setHandler:(id /* block */)arg1;
- (void)setIterator:(id)arg1;
- (void)setQueue:(id)arg1;

@end
