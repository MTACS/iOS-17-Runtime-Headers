
@interface NRDataFilePaths : NSObject

+ (id)_pathToDevicePropertiesFile;
+ (id)_pathToNanoRegistryPairingStorePathDirectory;
+ (id)_pathToNanoRegistryStateDirectory;
+ (id)_pathToNanoRegistryUnpairTriggerFileDirectory;
+ (id)_pathToRecoveryStateFile;
+ (id)_pathToSecureDevicePropertiesFile;
+ (id)_pathToUnpairTriggerFile;
+ (id)pathToNanoRegistryClassAFile;
+ (id)pathToNanoRegistryHistoryFile;
+ (id)pathToNanoRegistryHistoryRecoveryManagerFile:(id)arg1;
+ (id)pathToNanoRegistryHistorySecurePropertiesFile;
+ (id)pathToNanoRegistryMigrationRoutingSlip;
+ (id)pathToNanoRegistryStateDirectory;
+ (id)pathToNanoRegistryUDIDFile;

@end
