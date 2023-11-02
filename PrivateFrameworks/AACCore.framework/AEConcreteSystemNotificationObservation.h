
@interface AEConcreteSystemNotificationObservation : NSObject <AEObservation> {
    id /* block */  _notificationHandler;
    NSString * _notificationName;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)invalidate;

@end
