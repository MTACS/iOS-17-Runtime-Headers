
@interface HDProtectedDataOperation : NSObject <HDProtectedDataOperationSchedulerObserver> {
    NSString * _debugIdentifier;
    <HDProtectedDataOperationDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_shouldBypassMaintenanceCoordinator;
    long long  _lock_state;
    <HDProtectedDataOperationScheduling> * _protectedDataOperationScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *debugIdentifier;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)debugIdentifier;
- (id)description;
- (id)diagnosticDescription;
- (id)initWithOperationScheduler:(id)arg1 debugIdentifier:(id)arg2 delegate:(id)arg3;
- (id)initWithProfile:(id)arg1 debugIdentifier:(id)arg2 delegate:(id)arg3;
- (void)protectedDataOperationSchedulerProfileIsReady:(id)arg1;
- (void)protectedDataOperationSchedulerProtectedDataIsAvailable:(id)arg1;
- (bool)requestWorkWithPriority:(long long)arg1 error:(id*)arg2;

@end
