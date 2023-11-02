
@interface HDXPCAlarm : NSObject {
    id /* block */  _eventHandler;
    NSObject<OS_dispatch_queue> * _eventHandlerQueue;
    NSString * _eventName;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDXPCAlarmScheduler * _scheduler;
    id /* block */  _unitTest_schedulerObserver;
}

@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *eventHandlerQueue;
@property (nonatomic, readonly, copy) NSString *eventName;
@property (nonatomic, readonly) HDXPCAlarmScheduler *scheduler;
@property (nonatomic, copy) id /* block */ unitTest_schedulerObserver;

- (void).cxx_destruct;
- (void)beginReceivingEventsWithHandler:(id /* block */)arg1;
- (id)description;
- (void)eventDidFire:(id)arg1;
- (id /* block */)eventHandler;
- (id)eventHandlerQueue;
- (id)eventName;
- (id)initWithProfileIdentifier:(id)arg1 scheduler:(id)arg2 eventName:(id)arg3 eventHandlerQueue:(id)arg4;
- (id)initWithScheduler:(id)arg1 eventName:(id)arg2 eventHandlerQueue:(id)arg3;
- (void)invalidate;
- (id)scheduler;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setNextFireDate:(id)arg1 isUserVisible:(bool)arg2;
- (void)setUnitTest_schedulerObserver:(id /* block */)arg1;
- (void)unitTest_fireEventImmediatelyWithDate:(id)arg1 isUserVisible:(bool)arg2;
- (id /* block */)unitTest_schedulerObserver;
- (void)unschedule;

@end
