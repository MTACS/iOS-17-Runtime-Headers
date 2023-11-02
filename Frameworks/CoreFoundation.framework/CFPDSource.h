
@interface CFPDSource : NSObject {
    char * _actualPath;
    unsigned int  _actualPathRedirectedByTerminalSymlink;
    bool  _byHost;
    int  _cachedPlistFD;
    CFPrefsDaemon * _cfprefsd;
    unsigned int  _checkedForNonPrefsPlist;
    unsigned int  _dirty;
    NSObject<OS_os_transaction> * _dirtyTransaction;
    unsigned int  _disableBackup;
    struct __CFString { } * _domain;
    char * _fileName;
    int  _fileProtectionClass;
    short  _generationShmemIndex;
    unsigned int  _handlingRequest;
    unsigned int  _lastEgid;
    unsigned int  _lastEuid;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _managed;
    bool  _managedUsesContainer;
    unsigned int  _neverCache;
    struct __CFSet { } * _observingConnections;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observingConnectionsLock;
    int  _parentFD;
    NSObject<OS_xpc_object> * _pendingChangesQueue;
    unsigned long long  _pendingChangesSize;
    CFPDDataBuffer * _plist;
    unsigned int  _plistFileOwner;
    unsigned int  _plistFileOwnerReadable;
    unsigned int  _plistFileWorldReadable;
    unsigned int  _restrictedReadability;
    struct __CFString { } * _uncanonicalizedPathCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _uncanonicalizedPathCacheLock;
    struct __CFString { } * _userName;
    unsigned int  _waitingForDeviceUnlock;
    bool  _watchingParentDirectory;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _writeLock;
}

- (id)acceptMessage:(id)arg1;
- (void)asyncNotifyObserversOfWriteFromConnection:(id)arg1 message:(id)arg2;
- (bool)byHost;
- (void)cacheFileInfo;
- (int)cacheFileInfoForWriting:(bool)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3 didCreate:(bool*)arg4;
- (void)cleanUpAfterAcceptingMessage:(id)arg1;
- (void)clearCacheForReason:(struct __CFString { }*)arg1;
- (struct __CFString { }*)cloudConfigurationPath;
- (struct __CFString { }*)container;
- (id)copyPropertyListValidatingPlist:(bool)arg1;
- (id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(bool)arg1 andReturnFileUID:(unsigned int*)arg2 andMode:(unsigned short*)arg3;
- (struct __CFString { }*)copyUncanonicalizedPath;
- (id /* block */)createDiskWrite;
- (void)dealloc;
- (struct __CFString { }*)debugDump;
- (id)description;
- (struct __CFString { }*)domain;
- (void)drainPendingChanges;
- (bool)enqueueNewKey:(id)arg1 value:(id)arg2 encoding:(int)arg3 inBatch:(bool)arg4 fromMessage:(id)arg5;
- (void)finishedNonRequestWriteWithResult:(struct __CFDictionary { }*)arg1;
- (void)handleWritingResult:(struct __CFDictionary { }*)arg1;
- (unsigned long long)hash;
- (id)initWithDomain:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 byHost:(bool)arg3 managed:(bool)arg4 shmemIndex:(short)arg5 daemon:(id)arg6;
- (bool)isEqual:(id)arg1;
- (void)lock;
- (void)lockedAsync:(id /* block */)arg1;
- (void)lockedSync:(id /* block */)arg1;
- (bool)managed;
- (void)observingConnectionWasInvalidated:(id)arg1;
- (void)processEndOfMessageIntendingToRemoveSource:(bool*)arg1 replacingWithTombstone:(id*)arg2;
- (void)respondToFileWrittenToBehindOurBack;
- (void)setDirty:(bool)arg1;
- (void)setManagedPreferencesUseContainer:(bool)arg1;
- (void)setUncanonicalizedPathCached:(bool)arg1;
- (short)shmemIndex;
- (void)syncWriteToDisk;
- (void)syncWriteToDiskAndFlushCacheForReason:(struct __CFString { }*)arg1;
- (void)unlock;
- (void)updateShmemEntry;
- (struct __CFString { }*)user;
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 plistIsAvailableToRead:(bool)arg4 containerPath:(const char *)arg5 fileUID:(unsigned int)arg6 mode:(unsigned short)arg7 diagnosticMessage:(const char **)arg8;

@end
