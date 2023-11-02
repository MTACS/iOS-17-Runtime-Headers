
@interface SKManager : SKBaseManager <SKManagerListener> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _diskNotificationQueue;
    NSArray * _filesystems;
    NSHashTable * _listeners;
    NSMutableDictionary * _listenersAppearedDisks;
    bool  _shouldBeBindingsSafe;
    NSObject<OS_dispatch_queue> * _waitingForDiskQueue;
    NSMutableSet * _waitingForDiskSet;
    NSMutableSet * allDisks;
    bool  diskQueueStuck;
    NSSet * visibleRoles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultVisibleRoles;
+ (bool)isMountPointWithPath:(id)arg1;
+ (id)sharedManager;
+ (id)sharedManagerWithBindingsSafety:(bool)arg1;
+ (id)syncSharedManager;

- (void).cxx_destruct;
- (id)_diskForPath:(id)arg1;
- (id)_diskForString:(id)arg1;
- (void)_disksAppeared:(id)arg1 toListener:(id)arg2;
- (void)_initialPopulateCompleteForListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)allDisks;
- (id)allDisksSet;
- (id)childDisksForWholeDisk:(id)arg1;
- (id)contentDiskWithDisk:(id)arg1;
- (id)diskForBSDname:(id)arg1;
- (id)diskForPath:(id)arg1;
- (id)diskForString:(id)arg1;
- (id)diskForUUID:(id)arg1;
- (id)diskForVolumeName:(id)arg1;
- (void)disksAppeared:(id)arg1;
- (void)disksChanged:(id)arg1;
- (void)disksDisappeared:(id)arg1;
- (id)filesystemWithSKType:(id)arg1 isCaseSensitive:(bool)arg2 isEncrypted:(bool)arg3;
- (id)filesystems;
- (id)formatableFileSystems;
- (id)initWithBindingSafety:(bool)arg1;
- (void)initialPopulateComplete;
- (bool)isBusy;
- (id)knownDiskForDictionary:(id)arg1;
- (void)knownDiskForDictionary:(id)arg1 notify:(id /* block */)arg2 onQueue:(id)arg3;
- (id)knownDiskForDictionary:(id)arg1 waitingForDaemon:(bool)arg2;
- (id)knownDiskForDictionary:(id)arg1 waitingForDaemon:(bool)arg2 fromSet:(id)arg3;
- (id)knownDisksForDictionaries:(id)arg1;
- (id)knownDisksForDictionaries:(id)arg1 waitingForDaemon:(bool)arg2;
- (id)knownDisksForDictionaries:(id)arg1 waitingForDaemon:(bool)arg2 fromSet:(id)arg3;
- (void)managerResumed;
- (void)managerStalled;
- (id)newDiskWithDictionary:(id)arg1;
- (id)physicalStoresForAPFSVolume:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)setVisibleRoles:(id)arg1;
- (void)syncAllDisks;
- (id)visibleDisks;
- (id)visibleRoles;
- (id)volumesForAPFSPS:(id)arg1;
- (id)wholeDiskForDisk:(id)arg1;

@end
