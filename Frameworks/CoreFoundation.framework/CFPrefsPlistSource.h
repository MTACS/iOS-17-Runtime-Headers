
@interface CFPrefsPlistSource : CFPrefsSource {
    _Atomic bool  _avoidsDaemonCache;
    _Atomic bool  _byteCountLimitExceeded;
    _Atomic bool  _checkedInvalidHome;
    _Atomic bool  _directMode;
    _Atomic bool  _disableBackup;
    _Atomic int  _fileProtectionClass;
    _Atomic bool  _isByHost;
    _Atomic bool  _lastWriteFailed;
    _Atomic struct __CFDictionary {} * _locallySetDict;
    _Atomic bool  _observing;
    _Atomic bool  _readonly;
    _Atomic bool  _restrictedAccess;
    _Atomic bool  _volatile;
    _Atomic char * accessPath;
    struct __CFString { } * container;
    struct __CFString { } * domainIdentifier;
    struct __CFString { } * userIdentifier;
}

- (void)alreadylocked_clearCache;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int*)arg2;
- (long long)alreadylocked_generationCount;
- (void)alreadylocked_setPrecopiedValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 from:(id)arg4;
- (int)alreadylocked_updateObservingRemoteChanges;
- (struct __CFString { }*)container;
- (void*)copyValueForKey:(struct __CFString { }*)arg1;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (id)createSynchronizeMessage;
- (void)dealloc;
- (struct __CFString { }*)domainIdentifier;
- (long long)generationCount;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(bool*)arg5;
- (id)initWithDomain:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(bool)arg3 containerPath:(struct __CFString { }*)arg4 containingPreferences:(id)arg5;
- (bool)isByHost;
- (bool)isDirectModeEnabled;
- (bool)isVolatile;
- (bool)servedByUserSessionDaemon;
- (void)setAccessRestricted:(bool)arg1;
- (void)setBackupDisabled:(bool)arg1;
- (void)setDaemonCacheEnabled:(bool)arg1;
- (void)setFileProtectionClass:(int)arg1;
- (bool)synchronize;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)arg1;
- (struct __CFString { }*)userIdentifier;

@end
