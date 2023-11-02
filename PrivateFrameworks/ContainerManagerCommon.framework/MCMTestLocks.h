
@interface MCMTestLocks : NSObject {
    bool  _enabled;
    long long  _lockCount;
    NSObject<OS_dispatch_queue> * _lockQueue;
    NSObject<OS_dispatch_semaphore> * _lockSemaphore;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stateQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_stateQueue_acquireLock:(unsigned long long)arg1;
- (void)_stateQueue_releaseLock:(unsigned long long)arg1;
- (void)_stateQueue_updateCountForLock:(unsigned long long)arg1 byCount:(long long)arg2;
- (void)acquireLock:(unsigned long long)arg1;
- (bool)enabled;
- (id)init;
- (void)releaseAllLocks;
- (void)releaseLock:(unsigned long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setStateQueue:(id)arg1;
- (id)stateQueue;
- (void)waitOnLock:(unsigned long long)arg1;

@end
