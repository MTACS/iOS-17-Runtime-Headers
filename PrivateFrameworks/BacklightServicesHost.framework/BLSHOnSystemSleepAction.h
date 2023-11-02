
@interface BLSHOnSystemSleepAction : NSObject <BSCancellable, BSInvalidatable, SWSystemSleepObserver> {
    <BLSHOnSystemSleepActionDelegate> * _delegate;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _lock_proceedWithSleepBlock;
    double  _lock_sleepRequestedTime;
    long long  _lock_state;
    <BLSHOSInterfaceProviding> * _osInterfaceProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

+ (id)actionWithIdentifier:(id)arg1 delegate:(id)arg2;
+ (id)actionWithIdentifier:(id)arg1 delegate:(id)arg2 osInterfaceProvider:(id)arg3;

- (void).cxx_destruct;
- (void)actionCompleted;
- (void)cancel;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2 osInterfaceProvider:(id)arg3;
- (void)install;
- (void)invalidate;
- (long long)state;
- (void)systemSleepMonitor:(id)arg1 prepareForSleepWithCompletion:(id /* block */)arg2;
- (void)systemSleepMonitor:(id)arg1 sleepRequestedWithResult:(id /* block */)arg2;
- (void)systemSleepMonitorSleepRequestAborted:(id)arg1;
- (void)systemSleepMonitorWillWakeFromSleep:(id)arg1;
- (void)systemWillWakeForReason:(id)arg1;
- (void)uninstall;

@end
