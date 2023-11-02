
@interface QLPXObservable : NSObject {
    unsigned long long  _currentChange;
    bool  _isEnumeratingObservers;
    long long  _nestedChanges;
    long long  _numAppliedPendingChanges;
    NSObject<OS_dispatch_queue> * _observersQueue;
    NSMapTable * _observersQueue_changeObserversWithContexts;
    bool  _observersQueue_shouldCopyChangeObserversOnWrite;
    NSMutableArray * _pendingChangeBlocks;
}

@property (nonatomic, readonly) unsigned long long currentChanges;

- (void).cxx_destruct;
- (void)_applyPendingChanges;
- (void)_didChange;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)_publishChanges;
- (void)_willChange;
- (unsigned long long)currentChanges;
- (void)didPerformChanges;
- (void)didPublishChanges;
- (void)enumerateObserversUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (void)registerChangeObserver:(id)arg1 context:(void*)arg2;
- (void)signalChange:(unsigned long long)arg1;
- (void)unregisterChangeObserver:(id)arg1 context:(void*)arg2;
- (void)willPerformChanges;

@end
