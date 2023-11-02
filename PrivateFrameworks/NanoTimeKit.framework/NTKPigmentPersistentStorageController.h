
@interface NTKPigmentPersistentStorageController : NSObject {
    NSObject<OS_dispatch_queue> * _privateQueue;
    NSString * _rootDirectory;
}

+ (id)faceColorRootFolder;
+ (id)globalStoresFolder;
+ (id)perDeviceFolder;
+ (id)syncStoresFolder;

- (void).cxx_destruct;
- (id)_sharedCollections;
- (void)_writeData:(id)arg1 toFile:(id)arg2;
- (void)closeTransactionForDeviceUUID:(id)arg1;
- (id)colorDomainFilePath:(id)arg1 deviceUUID:(id)arg2;
- (id)colorSyncFolderPathWithDeviceUUID:(id)arg1;
- (bool)createColorSyncFolderIfNeededForDeviceUUID:(id)arg1;
- (bool)createFolderIfNeeded:(id)arg1;
- (void)deleteContent;
- (id)device;
- (id)facePigmentSetForDomain:(id)arg1 sharedCollections:(id)arg2;
- (id)init;
- (id)initWithRootDirectory:(id)arg1;
- (void)persistFacePigmentSet:(id)arg1 deviceUUID:(id)arg2;
- (void)persistFacePigmentSetData:(id)arg1 domain:(id)arg2 deviceUUID:(id)arg3;
- (void)persistSharedCollections:(id)arg1 deviceUUID:(id)arg2;
- (void)persistSharedCollectionsData:(id)arg1 deviceUUID:(id)arg2;
- (id)readPigmentSetFromData:(id)arg1 sharedCollections:(id)arg2;
- (id)readSharedCollectionsFromData:(id)arg1;
- (void)resetCache;
- (id)serializeFacePigmentSet:(id)arg1;
- (id)sharedCollections;
- (void)startTransactionForDeviceUUID:(id)arg1;
- (id)transactionLockerFileNameForDeviceUUID:(id)arg1;

@end
