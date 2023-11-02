
@interface MCHoldingTankManifest : NSObject {
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSMutableDictionary * _universalManifest;
}

+ (id)sharedManifest;

- (void).cxx_destruct;
- (bool)_adjustManifestForDevice:(unsigned long long)arg1 withIdentifier:(id)arg2 addingIdentifer:(bool)arg3 outError:(id*)arg4;
- (void)_createDirectory:(id)arg1 withIntermediateDirectories:(bool)arg2;
- (id)_manifestForDevice:(unsigned long long)arg1 createIfNil:(bool)arg2;
- (id)_pathToHoldingTankDirectoryForDevice:(unsigned long long)arg1;
- (id)_pathToHoldingTankManifestForDevice:(unsigned long long)arg1;
- (id)_profileDataFileNameForProfileIdentifier:(id)arg1;
- (bool)addProfileData:(id)arg1 withIdentifier:(id)arg2 toHoldingTankForDevice:(unsigned long long)arg3 outError:(id*)arg4;
- (void)dealloc;
- (id)init;
- (id)pathToHoldingTankProfileDataForIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2 createDirectory:(bool)arg3;
- (void)removeProfileDataWithIdentifier:(id)arg1 fromHoldingTankForDevice:(unsigned long long)arg2;
- (id)uninstalledProfileDataWithIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2;
- (id)uninstalledProfileIdentifiersForDevice:(unsigned long long)arg1;
- (id)uninstalledProfileWithIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2;

@end
