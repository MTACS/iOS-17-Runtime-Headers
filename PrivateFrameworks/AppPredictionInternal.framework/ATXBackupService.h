
@interface ATXBackupService : NSObject <ATXCloudStorageSettingsDelegate> {
    NSUserDefaults * _atxDefaults;
    ATXBackupFileManager * _backupFileManager;
    ATXCloudKitClient * _ckClient;
    ATXCloudStorageSettingsListener * _cloudStorageSettingsListener;
    NSString * _containerIdentifier;
    NSString * _deviceID;
    bool  _isManatee;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) ATXBackupFileManager *backupFileManager;
@property (nonatomic, retain) ATXCloudKitClient *ckClient;
@property (nonatomic) ATXCloudStorageSettingsListener *cloudStorageSettingsListener;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic) bool isManatee;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)allErrorsFromCloudKitError:(id)arg1;
+ (id)backupService;
+ (bool)isBackupRestore;
+ (bool)isCloudKitError:(id)arg1;
+ (bool)isManateeDecryptionError:(id)arg1;
+ (id)queryForBackupsWithDeviceID:(id)arg1;

- (void).cxx_destruct;
- (id)backupFileManager;
- (void)backupWithCompletionHandler:(id /* block */)arg1;
- (id)ckClient;
- (id)cloudStorageSettingsListener;
- (id)containerIdentifier;
- (id)deviceID;
- (void)fetchBackupAssetWithCompletionHandler:(id /* block */)arg1;
- (void)getDeviceIDWithCompletionHandler:(id /* block */)arg1;
- (void)handleDeleteDataRequest;
- (id)initWithContainerIdentifier:(id)arg1 backupFileManager:(id)arg2;
- (void)initializeCloudKitClientWithCompletionHandler:(id /* block */)arg1 withRetryBlock:(id /* block */)arg2;
- (bool)isManatee;
- (void)isManateeAvailableWithCompletionHandler:(id /* block */)arg1 withRetryBlock:(id /* block */)arg2;
- (void)restoreFromBackupIfNeccessary:(id /* block */)arg1;
- (void)restoreFromBackupWithRetries:(unsigned long long)arg1 fromContainerID:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)retryIfNeededInResponseToError:(id)arg1 withBlock:(id /* block */)arg2;
- (void)saveBackupAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serialQueue;
- (void)setBackupFileManager:(id)arg1;
- (void)setCkClient:(id)arg1;
- (void)setCloudStorageSettingsListener:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setIsManatee:(bool)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setupRecordZoneWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateIsRestoreStarted:(bool)arg1;
- (void)writeBackupToiCloud:(id /* block */)arg1;

@end
