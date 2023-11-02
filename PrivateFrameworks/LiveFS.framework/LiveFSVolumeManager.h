
@interface LiveFSVolumeManager : NSObject <LiveFSVolumeManager> {
    bool  _initDone;
    NSObject<LiveFSVolumeManagerDelegate> * delegate;
    NSMutableDictionary * descriptions;
    NSCondition * l;
    NSMutableDictionary * listeners;
}

+ (id)newServiceProxyObjectWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (void)LiveMountEjectVolumeCluster:(id)arg1 withFlags:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)addDisk:(id)arg1 fileSystemType:(id)arg2 reply:(id /* block */)arg3;
- (void)addDisk:(id)arg1 reply:(id /* block */)arg2;
- (void)addShimForFileSystemType:(id)arg1 parameters:(id)arg2 reply:(id /* block */)arg3;
- (void)addVolume:(id)arg1 atServer:(id)arg2 credentialType:(long long)arg3 credential:(id)arg4 reply:(id /* block */)arg5;
- (void)addVolume:(id)arg1 listener:(id)arg2 description:(id)arg3 reply:(id /* block */)arg4;
- (id)addVolume:(id)arg1 usingInterface:(id)arg2 connectionClass:(Class)arg3 andProxy:(id)arg4 withDescription:(id)arg5;
- (id)addVolume:(id)arg1 usingInterface:(id)arg2 connectionClass:(Class)arg3 queue:(id)arg4 proxy:(id)arg5 description:(id)arg6;
- (id)addVolumeCluster:(id)arg1;
- (void)credentialTypes:(id /* block */)arg1;
- (void)dealloc;
- (id)descriptionForVolume:(id)arg1;
- (void)ejectDisk:(id)arg1 usingFlags:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)ejectVolume:(id)arg1 usingFlags:(unsigned int)arg2 reply:(id /* block */)arg3;
- (id)getUniqueVolumeName:(id)arg1;
- (id)initServiceProxyObjectWithDelegate:(id)arg1;
- (void)initializationFinished;
- (void)listVolumes:(id /* block */)arg1;
- (void)listenerForVolume:(id)arg1 reply:(id /* block */)arg2;
- (void)removeVolume:(id)arg1;
- (id)removeVolumeCluster:(id)arg1;
- (void)removeVolumeLocked:(id)arg1;
- (void)sharesAtServer:(id)arg1 credentialType:(long long)arg2 credential:(id)arg3 reply:(id /* block */)arg4;
- (void)uniqueNameForName:(id)arg1 reply:(id /* block */)arg2;
- (void)unlockVolume:(id)arg1 password:(id)arg2 saveToKeychain:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)volumeProxyForVolume:(id)arg1;

@end
