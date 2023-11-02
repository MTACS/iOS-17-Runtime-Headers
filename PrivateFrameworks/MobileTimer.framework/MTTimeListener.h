
@interface MTTimeListener : NSObject <MTAgentNotificationListener> {
    MTObserverStore * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    <NAScheduler> * _serializer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTObserverStore *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)assertionTimeOutForNotification:(id)arg1 ofType:(long long)arg2;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(id /* block */)arg3;
- (bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (id)init;
- (id)initWithCallbackScheduler:(id)arg1;
- (id)observers;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (id)serializer;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSerializer:(id)arg1;

@end
