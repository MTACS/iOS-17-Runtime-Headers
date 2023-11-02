
@interface NCLayoutLoopDetector : NSObject {
    NSMutableArray * _notificationLayoutsInProgress;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSMutableArray *notificationLayoutsInProgress;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_saveNotificationLayoutsInProgress;
- (id)_savedNotificationLayoutsInProgress;
- (void)addNotificationRequestToLayoutsInProgress:(id)arg1;
- (id)init;
- (bool)layoutInProgressContainsNotificationRequest:(id)arg1;
- (id)notificationLayoutsInProgress;
- (id)queue;
- (void)removeNotificationRequestFromLayoutsInProgress:(id)arg1;
- (void)setNotificationLayoutsInProgress:(id)arg1;
- (void)setQueue:(id)arg1;

@end
