
@interface CalDarwinNotificationListener : NSObject <CalActivatable> {
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _listening;
    NSString * _notificationName;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) id /* block */ callback;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) bool listening;
@property (nonatomic, readonly) NSString *notificationName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (bool)_addObserver;
- (void)_notificationWithNameReceived:(id)arg1;
- (bool)_removeObserver;
- (void)activate;
- (id /* block */)callback;
- (id)callbackQueue;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)initWithNotificationName:(id)arg1 callback:(id /* block */)arg2;
- (id)initWithNotificationName:(id)arg1 callback:(id /* block */)arg2 queue:(id)arg3;
- (bool)listening;
- (id)notificationName;
- (void)setListening:(bool)arg1;
- (id)workQueue;

@end
