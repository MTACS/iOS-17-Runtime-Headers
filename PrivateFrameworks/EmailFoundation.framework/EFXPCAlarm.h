
@interface EFXPCAlarm : NSObject {
    id /* block */  _eventHandler;
    NSObject<OS_dispatch_queue> * _eventHandlerQueue;
    NSString * _eventName;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    EFXPCAlarmScheduler * _scheduler;
    id /* block */  _test_schedulerObserver;
}

@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *eventHandlerQueue;
@property (nonatomic, readonly, copy) NSString *eventName;
@property (nonatomic, readonly) EFXPCAlarmScheduler *scheduler;
@property (nonatomic, copy) id /* block */ test_schedulerObserver;

- (void).cxx_destruct;
- (void)beginReceivingEventsWithHandler:(id /* block */)arg1;
- (id)description;
- (void)eventDidFire:(id)arg1;
- (id /* block */)eventHandler;
- (id)eventHandlerQueue;
- (id)eventName;
- (id)initWithScheduler:(id)arg1 eventName:(id)arg2 eventHandlerQueue:(id)arg3;
- (void)invalidate;
- (id)scheduler;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setNextFireDate:(id)arg1 isUserVisible:(bool)arg2;
- (void)setTest_schedulerObserver:(id /* block */)arg1;
- (void)test_fireEventImmediatelyWithDate:(id)arg1 isUserVisible:(bool)arg2;
- (id /* block */)test_schedulerObserver;
- (void)unschedule;

@end
