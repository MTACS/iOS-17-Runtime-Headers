
@interface BLTRemoteGlobalSettingsSyncServer : NSObject {
    <BLTRemoteGlobalSettingsSyncServerLocalEndpoint><BLTRemoteGlobalSettingsProvider> * _localEndpoint;
    <BLTRemoteGlobalSettingsSyncServerRemoteEndpoint> * _remoteEndpoint;
}

@property (nonatomic) <BLTRemoteGlobalSettingsSyncServerLocalEndpoint><BLTRemoteGlobalSettingsProvider> *localEndpoint;
@property (nonatomic) <BLTRemoteGlobalSettingsSyncServerRemoteEndpoint> *remoteEndpoint;

+ (id)remoteGlobalSettingsSyncServerWithLocalEndpoint:(id)arg1 remoteEndpoint:(id)arg2;
+ (id)remoteGlobalSettingsSyncServerWithLocalEndpoint:(id)arg1 remoteEndpoint:(id)arg2 initialSyncCompletion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)checkAndThenSendGlobalSettings:(id)arg1;
- (id)initWithLocalEndpoint:(id)arg1 remoteEndpoint:(id)arg2 initialSyncCompletion:(id /* block */)arg3;
- (id)localEndpoint;
- (void)observer:(id)arg1 updateGlobalSettings:(id)arg2;
- (id)remoteEndpoint;
- (void)sendInitialChangsetWithCompletion:(id /* block */)arg1;
- (void)setLocalEndpoint:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1;
- (void)updateLocalSettingsWithProvider:(id)arg1;

@end
