
@interface CKCloudMessagesDetailController : PSListController {
    UIProgressHUD * _cloudKitProgressView;
    <IMDaemonMultiplexedConnectionManaging> * _daemonConnection;
    STStoragePlugin * _plugin;
}

@property (nonatomic, retain) UIProgressHUD *cloudKitProgressView;
@property (nonatomic, retain) <IMDaemonMultiplexedConnectionManaging> *daemonConnection;
@property (nonatomic, retain) STStoragePlugin *plugin;

+ (id)specifier;

- (void).cxx_destruct;
- (void)_displayiCloudErrorMessage;
- (bool)_isSyncingWithCloud;
- (id)cloudDocsSpecifiers;
- (id)cloudKitProgressView;
- (void)connectToDaemon;
- (id)daemonConnection;
- (id)dataSize:(id)arg1;
- (void)dealloc;
- (void)disableAndDelete:(id)arg1;
- (void)disconnectFromDaemon;
- (void)hideSpinner;
- (id)init;
- (id)plugin;
- (void)setCloudKitProgressView:(id)arg1;
- (void)setDaemonConnection:(id)arg1;
- (void)setEnabledDidReturned:(id)arg1;
- (void)setPlugin:(id)arg1;
- (void)showSpinnerMessage:(id)arg1;
- (id)specifiers;
- (void)tryToDisableAllDevicesDidReturn:(id)arg1;
- (void)undoDelete:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
