
@interface HMFTimerManager : NSObject <HMFTimerDelegate, HMFTimerManager> {
    <HMFTimerManagerDataSource> * _dataSource;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFTimer * _nextTimer;
    HMFTimerManagerTimerContext * _nextTimerContext;
    unsigned long long  _options;
    NSMutableArray * _sortedTimerContexts;
    <HMFTimerManagerDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMFTimerManagerDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addTimerContext:(id)arg1;
- (void)_refreshNextTimerIfNeededWithTimeInterval:(double)arg1;
- (id)_removeExpiredTimerContextsAndRefreshNextTimer;
- (void)_removeTimerContext:(id)arg1;
- (void)_removeTimerContextsWithMatchingObject:(id)arg1;
- (bool)_suspendTimerManagerIfEmpty;
- (void)cancelTimerForContext:(id)arg1;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)initWithOptions:(unsigned long long)arg1 dataSource:(id)arg2;
- (void)notifyDidFireForTimerContexts:(id)arg1 shouldDispatch:(bool)arg2;
- (void)refreshTimerManager;
- (void)refreshTimerManagerWithShouldDispatchNotifications:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (id)startTimerWithTimeInterval:(double)arg1 andReplaceObject:(id)arg2;
- (id)startTimerWithTimeInterval:(double)arg1 object:(id)arg2;
- (id)startTimerWithTimeInterval:(double)arg1 object:(id)arg2 shouldReplace:(bool)arg3;
- (void)timerDidFire:(id)arg1;

@end
