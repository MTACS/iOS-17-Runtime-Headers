
@interface HDNotificationInstructionManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDProfileReadyObserver> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_observersByClientIdentifier;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_hasEnqueuedMaintenanceWork;
    bool  _queue_hasInstructionsToInvalidate;
    NSDate * _unitTest_nowDate;
    id /* block */  unitTest_didEvaluateIfMaintenanceWorkIsNeeded;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *maintenanceOperationName;
@property (readonly) Class superclass;
@property (copy) id /* block */ unitTest_didEvaluateIfMaintenanceWorkIsNeeded;
@property (nonatomic, copy) NSDate *unitTest_nowDate;

- (void).cxx_destruct;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)diagnosticDescription;
- (bool)enumerateValidNotificationInstructionsForClientIdentifier:(id)arg1 action:(long long)arg2 error:(id*)arg3 enumerationBlock:(id /* block */)arg4;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 unitTest_nowDate:(id)arg2 unitTest_didEvaluateIfMaintenanceWorkIsNeeded:(id /* block */)arg3;
- (void)insertOrReplaceNotificationInstruction:(id)arg1 completion:(id /* block */)arg2;
- (bool)invalidateNotificationInstructionsWithMessageIdentifiers:(id)arg1 error:(id*)arg2;
- (id)maintenanceOperationName;
- (bool)obliterateNotificationInstructionsError:(id*)arg1;
- (void)profileDidBecomeReady:(id)arg1;
- (void)registerObserver:(id)arg1 forClientIdentifier:(id)arg2 queue:(id)arg3;
- (void)setUnitTest_didEvaluateIfMaintenanceWorkIsNeeded:(id /* block */)arg1;
- (void)setUnitTest_nowDate:(id)arg1;
- (id /* block */)unitTest_didEvaluateIfMaintenanceWorkIsNeeded;
- (id)unitTest_nowDate;
- (void)unregisterObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1 forClientIdentifier:(id)arg2;

@end
