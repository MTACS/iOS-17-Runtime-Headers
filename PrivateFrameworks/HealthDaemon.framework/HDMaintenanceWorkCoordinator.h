
@interface HDMaintenanceWorkCoordinator : NSObject <HDAssertionObserver, HDDiagnosticObject, HDMaintenanceOperationDelegate> {
    NSMutableSet * _activeOperations;
    HDAssertionManager * _assertionManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _maintenanceWorkQueue;
    NSObject<OS_dispatch_queue> * _managementQueue;
    NSMutableArray * _pendingOperations;
    bool  _suspended;
    NSObject<OS_dispatch_source> * _timeoutSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) bool suspended;

- (void).cxx_destruct;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)cancelAllOperations;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)enqueueMaintenanceOperation:(id)arg1;
- (id)init;
- (void)operationDidFinish:(id)arg1;
- (bool)startNextOperationWithNameImmediately:(id)arg1;
- (void)startOperationImmediately:(id)arg1;
- (bool)suspended;
- (id)takeMaintenanceSuspensionAssertionForOwner:(id)arg1;

@end
