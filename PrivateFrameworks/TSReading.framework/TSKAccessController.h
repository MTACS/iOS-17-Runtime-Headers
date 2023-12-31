
@interface TSKAccessController : NSObject {
    NSCondition * _cond;
    TSUWeakReference * _delegate;
    struct __CFRunLoopSource { } * _mainThreadPingSource;
    NSMutableArray * _pendingMainThreadInvocations;
    unsigned int  _readerCount;
    struct _TSKThreadInfo { 
        struct _opaque_pthread_t {} *threadId; 
        unsigned int count; 
    }  _readerInfo;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwLock;
    bool  _secondaryThreadWriting;
    NSMutableDictionary * _signalIdentifiers;
    NSMutableDictionary * _waitIdentifiers;
    bool  _writeBlockedMainThread;
    bool  _writeHeld;
    NSMutableArray * _writerQueue;
}

- (bool)currentThreadHasWriteLock;
- (void)dealloc;
- (bool)hasRead;
- (bool)hasWrite;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)p_asyncPerformSelectorOnMainThread:(SEL)arg1 withTarget:(id)arg2 argument:(void*)arg3;
- (void)p_blockMainThreadForWrite;
- (void)p_dequeueWrite;
- (void)p_enqueueWriteAndBlock;
- (void)p_flushPendingMainThreadBlocksQueueAcquiringLock:(bool)arg1;
- (bool)p_hasRead;
- (bool)p_hasWrite;
- (void)p_performReadOnMainThread:(id)arg1;
- (void)p_readLock;
- (void)p_readUnlock;
- (void)p_scheduleMainThreadRead:(id)arg1;
- (void)p_signalThread:(id)arg1;
- (id)p_threadIdentifier;
- (bool)p_waitWithCondition:(id)arg1 untilDate:(id)arg2;
- (void)p_writeLockAndBlockMainThread:(bool)arg1;
- (void)p_writeUnlock;
- (void)p_writeUnlockAndPerformWithMainThreadBlocked:(id /* block */)arg1;
- (void)performRead:(id /* block */)arg1;
- (void)performRead:(SEL)arg1 thenReadOnMainThread:(SEL)arg2 withTarget:(id)arg3 argument:(void*)arg4;
- (void)performRead:(SEL)arg1 thenWrite:(SEL)arg2 thenReadOnMainThread:(SEL)arg3 withTarget:(id)arg4 argument:(void*)arg5;
- (void)performRead:(SEL)arg1 thenWrite:(SEL)arg2 thenReadOnMainThread:(SEL)arg3 withTarget:(id)arg4 argument:(void*)arg5 passReadResultToMainThreadRead:(bool)arg6;
- (void)performRead:(SEL)arg1 withTarget:(id)arg2 argument:(void*)arg3;
- (void)performRead:(SEL)arg1 withTarget:(id)arg2 argument:(void*)arg3 argument2:(void*)arg4;
- (void)performWrite:(id /* block */)arg1;
- (void)performWrite:(id /* block */)arg1 blockMainThread:(bool)arg2;
- (void)performWrite:(SEL)arg1 withTarget:(id)arg2 argument:(void*)arg3;
- (void)signalIdentifier:(id)arg1;
- (void)spinMainThreadRunLoopUntil:(SEL)arg1 onTarget:(id)arg2;
- (void)waitOnIdentifier:(id)arg1;
- (bool)waitOnIdentifier:(id)arg1 untilDate:(id)arg2 releaseReadWhileWaiting:(bool)arg3;

@end
