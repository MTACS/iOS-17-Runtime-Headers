
@interface HMDPersistentStore : HMFObject <HMDPersistentStore, HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;
+ (void)archiveBulletinBoard:(id)arg1;
+ (id)archiveCloudServerTokenData:(id)arg1;
+ (id)archiveHomeData:(id)arg1 toLocation:(id)arg2;
+ (id)archiveHomeDataForTransaction:(id)arg1;
+ (id)archiveHomeDataLegacy:(id)arg1;
+ (id)archiveHomeDataLegacy:(id)arg1 toLocation:(id)arg2;
+ (id)archiveIDSDataSyncJournal:(id)arg1;
+ (bool)archiveMetadata:(id)arg1;
+ (void)archiveVendorStore:(id)arg1;
+ (void)cleanupKeysInStore;
+ (id)controllerUsernameForPairingIdentity:(id)arg1 error:(id*)arg2;
+ (id)decryptData:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
+ (id)decryptDataWithControllerKey:(id)arg1 totalKeysFound:(unsigned long long*)arg2 deleteExtraKeys:(bool)arg3 allowControllerIdentifierToChange:(bool)arg4 controllerIdentifierChanged:(bool*)arg5 successfulKeyUserName:(id*)arg6 error:(id*)arg7;
+ (bool)deserializeHomeData:(id*)arg1 localStorage:(bool)arg2 fromData:(id)arg3;
+ (bool)deserializeHomeData:(id*)arg1 usingLocalStorage:(bool)arg2 fromData:(id)arg3 forHH2Migration:(bool)arg4;
+ (id)encryptData:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
+ (id)encryptDataWithControllerKey:(id)arg1 error:(id*)arg2;
+ (bool)hasControllerKeyWithUsername:(id)arg1 error:(id*)arg2;
+ (id)loadBuiltinPlainMetadataDictionary;
+ (id)loadPlainMetadataDictionary;
+ (id)logCategory;
+ (id)readDataFromPath:(id)arg1;
+ (bool)removeLegacyHomeArchive:(id*)arg1;
+ (void)removeServerTokenDataFile;
+ (void)removeTransactionJournal;
+ (void)resetConfiguration:(unsigned long long)arg1;
+ (id)serializeHomeData:(id)arg1 localStorage:(bool)arg2 remoteDeviceOnSameAccount:(bool)arg3;
+ (id)unarchiveBulletinBoard;
+ (id)unarchiveHomeData:(id*)arg1 decryptionFailed:(bool*)arg2 fromLocation:(id)arg3 successfulKeyUserName:(id*)arg4 forHH2Migration:(bool)arg5;
+ (id)unarchiveHomeData:(id*)arg1 decryptionFailed:(bool*)arg2 successfulKeyUserName:(id*)arg3;
+ (id)unarchiveIDSDataSyncJournal;
+ (id)unarchiveVendorStore;
+ (id)writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;
+ (bool)writeDictionary:(id)arg1 toStorePath:(id)arg2;

- (id)archiveDictionary:(id)arg1 withPath:(id)arg2 forKey:(id)arg3;
- (id)unarchiveDictionaryFromData:(id)arg1 allowedClasses:(id)arg2 forKey:(id)arg3;
- (id)unarchiveDictionaryWithPath:(id)arg1 allowedClasses:(id)arg2 forKey:(id)arg3;
- (id)writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;

@end
