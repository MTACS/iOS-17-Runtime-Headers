
@interface CFPrefsSource : NSObject {
    _CFXPreferences * _containingPreferences;
    struct __CFDictionary { } * _dict;
    _Atomic long long  _generationCount;
    bool  _isSearchList;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    __CFPrefsWeakObservers * _observers;
    _Atomic unsigned int  lastKnownShmemState;
    _Atomic _Atomic unsigned int * shmemEntry;
    unsigned short  stalenessCheckWindowStaleCount;
    double  stalenessCheckWindowStart;
}

- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;
- (void)alreadylocked_clearCache;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int*)arg2;
- (long long)alreadylocked_generationCount;
- (void)alreadylocked_setPrecopiedValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 from:(id)arg4;
- (int)alreadylocked_updateObservingRemoteChanges;
- (struct __CFString { }*)container;
- (struct __CFString { }*)copyOSLogDescription;
- (void*)copyValueForKey:(struct __CFString { }*)arg1;
- (id)copyVolatileSourceWithContainingPreferences:(id)arg1;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (void)dealloc;
- (id)description;
- (struct __CFString { }*)domainIdentifier;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)arg1;
- (long long)generationCount;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(bool*)arg5;
- (id)initWithContainingPreferences:(id)arg1;
- (bool)isByHost;
- (bool)isDirectModeEnabled;
- (bool)isVolatile;
- (void)lock;
- (bool)managed;
- (void)mergeIntoDictionary:(struct __CFDictionary { }*)arg1 sourceDictionary:(struct __CFDictionary { }*)arg2 cloudKeyEvaluator:(id /* block */)arg3;
- (bool)servedByUserSessionDaemon;
- (void)setAccessRestricted:(bool)arg1;
- (void)setBackupDisabled:(bool)arg1;
- (void)setConfigurationPath:(struct __CFString { }*)arg1;
- (void)setDaemonCacheEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFileProtectionClass:(int)arg1;
- (void)setStoreName:(struct __CFString { }*)arg1;
- (bool)synchronize;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)arg1;
- (void)unlock;
- (struct __CFString { }*)userIdentifier;

@end
