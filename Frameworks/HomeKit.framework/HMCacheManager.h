
@interface HMCacheManager : HMFObject <HMCacheDelegate, HMFTimerDelegate> {
    NSMapTable * _cacheMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _pendingWrites;
    <HMPersistentCache> * _persistentCache;
    NSObject<OS_dispatch_queue> * _workQueue;
    HMFTimer * _writeDebounceTimer;
}

@property (readonly) NSMapTable *cacheMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableDictionary *pendingWrites;
@property (readonly) <HMPersistentCache> *persistentCache;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFTimer *writeDebounceTimer;

- (void).cxx_destruct;
- (id)_cacheWithName:(id)arg1;
- (id)_loadCacheNamed:(id)arg1;
- (void)_saveCache:(id)arg1;
- (void)cacheDidUpdate:(id)arg1;
- (id)cacheMap;
- (id)cacheWithName:(id)arg1;
- (void)cacheWithName:(id)arg1 completion:(id /* block */)arg2;
- (void)forceFlushToDisk;
- (id)initWithTimerFactory:(id /* block */)arg1 persistentCache:(id)arg2;
- (id)pendingWrites;
- (id)persistentCache;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;
- (id)writeDebounceTimer;

@end
