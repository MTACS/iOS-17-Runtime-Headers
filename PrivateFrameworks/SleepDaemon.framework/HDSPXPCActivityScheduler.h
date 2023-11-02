
@interface HDSPXPCActivityScheduler : NSObject <HDSPActivityScheduler> {
    <NAScheduler> * _callbackScheduler;
    NSMutableSet * _eventNames;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _eventNamesLock;
}

@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableSet *eventNames;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } eventNamesLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (id)callbackScheduler;
- (id)eventNames;
- (struct os_unfair_lock_s { unsigned int x1; })eventNamesLock;
- (id)initWithCallbackScheduler:(id)arg1;
- (void)scheduleActivity:(id)arg1 activityHandler:(id /* block */)arg2;
- (void)unscheduleActivities;

@end
