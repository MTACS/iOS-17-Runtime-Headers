
@interface HMDSyncOperationQueue : HMFObject <HMFLogging> {
    HMFExponentialBackoffTimer * _backoffTimer;
    bool  _hasExponentialBackoff;
    double  _initialBackoff;
    double  _initialDelay;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDSyncOperationManager * _manager;
    NSString * _name;
    NSMutableArray * _stagedOperations;
    NSMutableArray * _waitingOperations;
}

@property (nonatomic, retain) HMFExponentialBackoffTimer *backoffTimer;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long countTotal;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasExponentialBackoff;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialBackoff;
@property (nonatomic) double initialDelay;
@property (nonatomic) HMDSyncOperationManager *manager;
@property (nonatomic, readonly) NSString *name;
@property (readonly, copy) NSArray *stagedOperations;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *waitingOperations;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_addOperation:(id)arg1;
- (void)_addStagedOperation:(id)arg1;
- (void)_addWaitingOperation:(id)arg1;
- (void)_createBackoffTimer;
- (void)_removeStagedOperation:(id)arg1;
- (void)_removeWaitingOperation:(id)arg1;
- (void)addOperation:(id)arg1 withDelay:(double)arg2;
- (id)allOperations;
- (id)backoffTimer;
- (long long)count;
- (long long)countTotal;
- (id)description;
- (void)dropAllOperations;
- (void)dropOperation:(id)arg1;
- (bool)hasExponentialBackoff;
- (id)initName:(id)arg1 syncManager:(id)arg2 initialDelay:(double)arg3 initialBackoff:(double)arg4 hasBackoff:(bool)arg5;
- (double)initialBackoff;
- (double)initialDelay;
- (bool)isInMaximumTimeInterval;
- (id)manager;
- (id)name;
- (id)nextOperation;
- (id)operationsToCancel;
- (bool)processFiredTimer:(id)arg1;
- (void)resetBackoffTimer;
- (void)setBackoffTimer:(id)arg1;
- (void)setHasExponentialBackoff:(bool)arg1;
- (void)setInitialBackoff:(double)arg1;
- (void)setInitialDelay:(double)arg1;
- (void)setManager:(id)arg1;
- (void)stageOperation:(id)arg1;
- (id)stagedOperations;
- (id)waitingOperations;

@end
