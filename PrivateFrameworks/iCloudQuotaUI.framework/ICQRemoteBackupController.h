
@interface ICQRemoteBackupController : PSListController <DelayedPushDelegate, NSURLConnectionDelegate> {
    ACAccount * _account;
    NSString * _backupSizeString;
    ICQSpinnerBezel * _deletionBezel;
    NSURL * _deletionURL;
    ICQDeviceIdentificationView * _deviceIdentificationView;
    NSString * _deviceIdentifier;
    NSURL * _deviceImageURL;
    NSString * _deviceName;
    bool  _isBackupEnabled;
    NSString * _lastBackupDateString;
    ICQPreferencesRemoteUIDelegate * _remoteDelegate;
}

@property (nonatomic, retain) NSString *backupSizeString;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSURL *deletionURL;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic, retain) NSURL *deviceImageURL;
@property (nonatomic, retain) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBackupEnabled;
@property (nonatomic, retain) NSString *lastBackupDateString;
@property (nonatomic, retain) ICQPreferencesRemoteUIDelegate *remoteDelegate;
@property (readonly) Class superclass;

+ (id)specifier;
+ (id)specifierForAccount:(id)arg1;

- (void).cxx_destruct;
- (void)_backupDeletionFailedWithCode:(long long)arg1;
- (void)_backupDeletionSuccess;
- (id)backupSizeString;
- (void)dealloc;
- (void)deleteBackupConfirmed;
- (id)deletionURL;
- (id)deviceIdentifier;
- (id)deviceImageURL;
- (id)deviceName;
- (void)endDeletionBezel;
- (void)firstDeleteConfirmation:(id)arg1;
- (bool)isBackupEnabled;
- (id)lastBackupDateString;
- (void)loadFailed:(id)arg1 withError:(id)arg2;
- (void)loadFinished:(id)arg1;
- (void)loadPropertyValuesFromDictionary:(id)arg1;
- (void)loadStarted:(id)arg1;
- (void)loadView;
- (id)remoteDelegate;
- (void)secondDeleteConfirmation;
- (void)setBackupSizeString:(id)arg1;
- (void)setDeletionURL:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setDeviceImageURL:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setIsBackupEnabled:(bool)arg1;
- (void)setLastBackupDateString:(id)arg1;
- (void)setRemoteDelegate:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifiers;
- (void)startDeletionBezel;

@end
