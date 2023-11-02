
@interface ATXCloudStorageSettingsListener : NSObject {
    <ATXCloudStorageSettingsDelegate> * _delegate;
}

@property (nonatomic, retain) <ATXCloudStorageSettingsDelegate> *delegate;

+ (bool)isBackupForContactsEnabled;
+ (bool)isBackupForSiriEnabled;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleBackupPreferencesDidChange;
- (void)handleDeleteDataRequest;
- (id)init;
- (void)registerForCloudStorageDeletedByUserNotification;
- (void)registerForCloudStorageSettingsNotifications;
- (void)registerForCloudSyncPreferenceDidChangeNotification;
- (void)setDelegate:(id)arg1;

@end
