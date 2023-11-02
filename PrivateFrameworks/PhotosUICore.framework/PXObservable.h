
@interface PXObservable : NSObject {
    unsigned long long  _currentChange;
    bool  _hasObservers;
    bool  _isEnumeratingObservers;
    NSObject<OS_os_log> * _log;
    unsigned long long  _logContext;
    long long  _nestedChanges;
    long long  _numAppliedPendingChanges;
    NSObject<OS_dispatch_queue> * _observersQueue;
    NSMapTable * _observersQueue_changeObserversWithContexts;
    bool  _observersQueue_shouldCopyChangeObserversOnWrite;
    NSMutableArray * _pendingChangeBlocks;
}

@property (nonatomic, readonly) unsigned long long currentChanges;
@property (nonatomic, readonly) bool hasObservers;
@property (nonatomic, readonly) bool isPerformingChanges;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long logContext;
@property (nonatomic, readonly) bool shouldNotifyObserversAfterApplyingChangeBlocks;

- (void).cxx_destruct;
- (void)_applyPendingChanges;
- (void)_didChange;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)_publishChanges;
- (id)_pxStoryPPT_observeChangesUsingChangeHandler:(id /* block */)arg1;
- (void)_setHasObservers:(bool)arg1;
- (void)_willChange;
- (void)copyLogConfigurationFrom:(id)arg1;
- (unsigned long long)currentChanges;
- (void)didEndChangeHandling;
- (void)didPerformChanges;
- (void)didPublishChanges;
- (void)enumerateObserversUsingBlock:(id /* block */)arg1;
- (bool)hasObservers;
- (void)hasObserversDidChange;
- (id)init;
- (bool)isPerformingChanges;
- (id)log;
- (unsigned long long)logContext;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (id)pxStory_enumerateStatesByWatchingChanges:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)pxStory_enumerateStatesWithTimeout:(double)arg1 watchingChanges:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)registerChangeObserver:(id)arg1 context:(void*)arg2;
- (void)setLog:(id)arg1;
- (void)setLogContext:(unsigned long long)arg1;
- (bool)shouldNotifyObserversAfterApplyingChangeBlocks;
- (void)signalChange:(unsigned long long)arg1;
- (void)unregisterChangeObserver:(id)arg1 context:(void*)arg2;
- (void)willPerformChanges;

@end
