
@interface _HKWorkoutObserver : NSObject <_HKXPCExportable> {
    <_HKWorkoutObserverDelegate> * _delegate;
    HKHealthStore * _healthStore;
    NSUUID * _identifier;
    _HKCurrentWorkoutSnapshot * _latestSnapshot;
    NSLock * _lock;
    int  _notifyToken;
    NSMutableArray * _pendingHandlers;
    HKTaskServerProxyProvider * _proxyProvider;
    bool  _receivedInitialSnapshot;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_HKWorkoutObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)_lock_startTaskServerIfNeeded;
- (void)_startTaskServerIfNeeded;
- (void)clientRemote_didUpdateWorkoutSnapshot:(id)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)currentWorkoutSnapshotWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)exportedInterface;
- (id)healthStore;
- (id)identifier;
- (id)initWithHealthStore:(id)arg1;
- (id)proxyProvider;
- (id)remoteInterface;
- (void)setDelegate:(id)arg1;
- (void)waitForAutomaticWorkoutRecoveryWithCompletion:(id /* block */)arg1;

@end
