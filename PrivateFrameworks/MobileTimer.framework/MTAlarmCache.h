
@interface MTAlarmCache : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    bool  _needsUpdate;
    MTAlarm * _nextAlarm;
    NSMutableArray * _orderedAlarms;
    NSMutableArray * _sleepAlarms;
    id /* block */  _updateBlock;
}

@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } cacheLock;
@property (nonatomic) bool needsUpdate;
@property (nonatomic, retain) MTAlarm *nextAlarm;
@property (nonatomic, retain) NSMutableArray *orderedAlarms;
@property (nonatomic, retain) NSMutableArray *sleepAlarms;
@property (nonatomic, copy) id /* block */ updateBlock;

- (void).cxx_destruct;
- (void)_getCachedAlarmsWithCompletion:(id /* block */)arg1 doSynchronous:(bool)arg2;
- (bool)_isUpdateNeeded;
- (void)_withLock:(id /* block */)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })cacheLock;
- (void)getCachedAlarmsSyncWithCompletion:(id /* block */)arg1;
- (void)getCachedAlarmsWithCompletion:(id /* block */)arg1;
- (id)initWithUpdateBlock:(id /* block */)arg1;
- (void)markNeedsUpdate;
- (bool)needsUpdate;
- (id)nextAlarm;
- (id)orderedAlarms;
- (void)setCacheLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setNextAlarm:(id)arg1;
- (void)setOrderedAlarms:(id)arg1;
- (void)setSleepAlarms:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id)sleepAlarms;
- (id /* block */)updateBlock;

@end
