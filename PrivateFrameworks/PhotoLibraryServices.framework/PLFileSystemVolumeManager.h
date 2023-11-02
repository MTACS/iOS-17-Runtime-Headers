
@interface PLFileSystemVolumeManager : NSObject {
    NSFileManager * _fileManager;
    NSMapTable * _mocsByVolume;
    NSMutableDictionary * _mountedVolumeURLsByUuid;
    NSMutableDictionary * _registeredFileSystemVolumesByUuid;
    NSObject<OS_dispatch_queue> * _synchronizationQueue;
}

+ (id)sharedFileSystemVolumeManager;

- (void).cxx_destruct;
- (void)_updateMountedVolumeURLs;
- (void)_updateOfflineStates;
- (void)dealloc;
- (id)initSharedVolumeManager;
- (void)registerPLFileSystemVolume:(id)arg1;
- (void)unregisterPLFileSystemVolume:(id)arg1;
- (id)volumeForURL:(id)arg1 context:(id)arg2;

@end
