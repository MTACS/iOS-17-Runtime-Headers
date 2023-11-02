
@interface IMOneTimeCodeAccelerator : NSObject {
    <IMDaemonMultiplexedConnectionManaging> * _daemonConnection;
    id /* block */  _settingUpdateBlock;
    id /* block */  _updateBlock;
}

@property (nonatomic, retain) <IMDaemonMultiplexedConnectionManaging> *daemonConnection;
@property (nonatomic, copy) id /* block */ settingUpdateBlock;
@property (nonatomic, copy) id /* block */ updateBlock;

+ (void)setSyncedSettingsManager:(id)arg1;
+ (id)syncedSettingsManager;

- (void).cxx_destruct;
- (void)_deleteVerificationCodesDidChange:(id)arg1;
- (void)_incomingCodeUpdateFromDaemon:(id)arg1;
- (void)consumeCodeWithGuid:(id)arg1;
- (id)daemonConnection;
- (void)dealloc;
- (void)fetchAutoDeletionPreferenceWithCompletionHandler:(id /* block */)arg1;
- (id)initWithBlockForUpdates:(id /* block */)arg1;
- (void)onboardDeleteVerificationCodesIfNeededWithCompletionHandler:(id /* block */)arg1;
- (void)onboardDeleteVerificationCodesIfNeededWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAutoDeletionPreference:(bool)arg1;
- (void)setDaemonConnection:(id)arg1;
- (void)setSettingUpdateBlock:(id /* block */)arg1;
- (void)setUpConnectionToDaemaon;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id /* block */)settingUpdateBlock;
- (id /* block */)updateBlock;

@end
