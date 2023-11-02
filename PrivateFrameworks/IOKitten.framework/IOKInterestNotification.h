
@interface IOKInterestNotification : NSObject {
    id /* block */  _handler;
    IOKInterestNotificationRef * _notificationRef;
    unsigned int  _object;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, readonly) IOKInterestNotificationRef *notificationRef;
@property (nonatomic) unsigned int object;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)handler;
- (id)init;
- (id)notificationRef;
- (unsigned int)object;
- (id)queue;
- (void)setHandler:(id /* block */)arg1;
- (void)setObject:(unsigned int)arg1;
- (void)setQueue:(id)arg1;

@end
