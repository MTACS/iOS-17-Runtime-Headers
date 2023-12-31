
@interface SUSUICommandLineToolClient : NSObject <SUSUICommandLineToolClientInterface> {
    bool  _connected;
    <SUSUICommandLineToolClientDelegate> * _delegate;
    NSXPCConnection * _serverConnection;
    bool  _serverIsExiting;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUSUICommandLineToolClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLForType:(unsigned long long)arg1;
- (void)_connectToServerIfNecessary;
- (void)_invalidateConnection;
- (void)_noteConnectionDropped;
- (void)_noteServerExiting;
- (id)_remoteInterface;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dismissAllAlerts;
- (void)downloadDidFinish;
- (void)getDDMAlertStatus:(id /* block */)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (void)reboot:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPasscodePolicy:(unsigned long long)arg1;
- (void)showAuthenticationUIWithOptions:(unsigned long long)arg1 result:(id /* block */)arg2;
- (void)showDDMAlert:(long long)arg1 install:(bool)arg2;
- (void)showEmergencyCallUIWithOptions:(unsigned long long)arg1 result:(id /* block */)arg2;
- (void)showFollowUp:(unsigned long long)arg1;
- (void)showLaggardsUi:(unsigned long long)arg1 usingFakeData:(bool)arg2 result:(id /* block */)arg3;
- (void)showMiniAlert:(unsigned long long)arg1 usingFakeData:(bool)arg2 errorCode:(id)arg3;
- (void)simulateComingFromOTAUpdate;
- (void)toggleSettingsBadge:(bool)arg1;

@end
