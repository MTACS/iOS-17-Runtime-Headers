
@interface HMDBackgroundTaskManager : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDBackgroundTaskLogger * _logger;
    NSMutableDictionary * _pendingTaskDateByIdentifier;
    NSMutableDictionary * _tasksByIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDBackgroundTaskLogger *logger;
@property (nonatomic, readonly) NSMutableDictionary *pendingTaskDateByIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *tasksByIdentifier;

+ (id)logCategory;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_configure;
- (void)_handleEvent:(id)arg1;
- (void)_handlePendingTaskWithIdentifier:(id)arg1;
- (void)_postNotificationWithIdentifier:(id)arg1;
- (void)_registerEventWithIdentifier:(id)arg1 fireDate:(id)arg2;
- (void)_setTask:(id)arg1 forIdentifier:(id)arg2;
- (id)_taskForIdentifier:(id)arg1;
- (void)_unregisterEventWithIdentifier:(id)arg1;
- (void)cancelTaskWithIdentifier:(id)arg1 onObserver:(id)arg2;
- (id)init;
- (id)logger;
- (id)pendingTaskDateByIdentifier;
- (bool)scheduleTaskWithIdentifier:(id)arg1 fireDate:(id)arg2 onObserver:(id)arg3 selector:(SEL)arg4 error:(id*)arg5;
- (id)tasksByIdentifier;

@end
