
@interface TSUFlushingManager : NSObject {
    unsigned long long  _activeBgThreadTask;
    bool  _alwaysFlushing;
    unsigned long long  _backgroundTransitionTaskId;
    NSThread * _bgThread;
    unsigned int  _clock;
    NSCondition * _cond;
    <TSUFlushable> * _flushingObject;
    TSUPointerKeyDictionary * _inactiveObjects;
    bool  _isFlushing;
    NSCondition * _isFlushingCond;
    TSUMemoryWatcher * _memoryWatcher;
    TSURetainedPointerKeyDictionary * _objects;
    void * _sortedNewObjects;
    void * _sortedObjects;
    bool  _stopFlushing;
    bool  _stopFlushingWhenQueueEmpty;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedManager;

- (void)_backgroundThread:(id)arg1;
- (void)_bgTaskFinished;
- (void)_bgTaskStarted;
- (void)_bgThreadActive;
- (void)_bgThreadInactive;
- (void)_didUseObject:(id)arg1;
- (void)_flushAllEligible;
- (void)_startFlushingObjects;
- (void)_stopFlushingObjects;
- (void)addObject:(id)arg1;
- (void)advanceClock;
- (id)autorelease;
- (bool)controlsActiveObject:(id)arg1;
- (bool)controlsInactiveObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didEnterBackground;
- (void)didReceiveMemoryWarning;
- (void)doneWithObject:(id)arg1;
- (struct TSUFlushableObjectInfo { id x1; int x2; int x3; int x4; unsigned int x5[2]; }*)eraseInfoForObject:(id)arg1;
- (id)init;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo { id x1; int x2; int x3; int x4; unsigned int x5[2]; }*)arg1;
- (bool)isNewObject:(struct TSUFlushableObjectInfo { id x1; int x2; int x3; int x4; unsigned int x5[2]; }*)arg1;
- (void)memoryLevelDecreased:(int)arg1 was:(int)arg2;
- (void)memoryLevelIncreased:(int)arg1 was:(int)arg2;
- (void)protectObject:(id)arg1;
- (oneway void)release;
- (void)removeObject:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)safeToFlush:(id)arg1 wasAccessed:(bool)arg2;
- (void)stopProtectingObject:(id)arg1;
- (void)transferNewObjects;
- (void)unsafeToFlush:(id)arg1;
- (void)willEnterForeground;

@end
