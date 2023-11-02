
@interface ATXBackgroundSaver : NSObject <ATXSigtermObserver> {
    id /* block */  _block;
    _PASLock * _lock;
    NSObject<OS_dispatch_queue> * _queue;
    ATXSigtermListener * _sigtermListener;
}

- (void).cxx_destruct;
- (void)_cancelSaveTimer;
- (void)_cancelSaveTimerWithLockWitness:(id)arg1;
- (void)_saveImmediatelyOnSigterm;
- (void)dealloc;
- (void)handleSigterm;
- (id)init;
- (id)initWithQueue:(id)arg1 block:(id /* block */)arg2;
- (void)scheduleSave;
- (void)scheduleSaveImmediately;

@end
