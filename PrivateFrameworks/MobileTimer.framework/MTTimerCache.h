
@interface MTTimerCache : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    bool  _needsUpdate;
    MTTimer * _nextTimer;
    NSMutableArray * _orderedTimers;
    id /* block */  _updateBlock;
}

@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } cacheLock;
@property (nonatomic) bool needsUpdate;
@property (nonatomic, retain) MTTimer *nextTimer;
@property (nonatomic, retain) NSMutableArray *orderedTimers;
@property (nonatomic, copy) id /* block */ updateBlock;

- (void).cxx_destruct;
- (void)_getCachedTimersWithCompletion:(id /* block */)arg1 doSynchronous:(bool)arg2;
- (bool)_isUpdateNeeded;
- (void)_withLock:(id /* block */)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })cacheLock;
- (void)getCachedTimersSyncWithCompletion:(id /* block */)arg1;
- (void)getCachedTimersWithCompletion:(id /* block */)arg1;
- (id)initWithUpdateBlock:(id /* block */)arg1;
- (void)markNeedsUpdate;
- (bool)needsUpdate;
- (id)nextTimer;
- (id)orderedTimers;
- (void)setCacheLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setNextTimer:(id)arg1;
- (void)setOrderedTimers:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id /* block */)updateBlock;

@end
