
@interface BLSHPauseOnSystemSleepAttributeEntry : NSObject <BLSHLocalAssertionAttributeHandlerEntry, SWSystemSleepObserver> {
    <BLSAssertionServiceResponding> * _assertion;
    BLSAttribute * _attribute;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_invalidated;
    bool  _lock_paused;
    <BLSHAssertionAttributeHandlerService> * _service;
}

@property (nonatomic, readonly) <BLSAssertionServiceResponding> *assertion;
@property (nonatomic, readonly) BLSAttribute *attribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BLSHAssertionAttributeHandlerService> *service;
@property (readonly) Class superclass;

+ (id)activateForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3 attributeHandler:(id)arg4;

- (void).cxx_destruct;
- (id)assertion;
- (id)attribute;
- (id)initForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3;
- (void)invalidate;
- (bool)reactivateIfPossible;
- (id)service;
- (void)systemSleepMonitor:(id)arg1 prepareForSleepWithCompletion:(id /* block */)arg2;
- (void)systemSleepMonitor:(id)arg1 sleepRequestedWithResult:(id /* block */)arg2;
- (void)systemSleepMonitorSleepRequestAborted:(id)arg1;
- (void)systemSleepMonitorWillWakeFromSleep:(id)arg1;

@end
