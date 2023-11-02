
@interface MDMServicerCore : NSObject <MDMUserXPCProtocol, MDMXPCProtocol> {
    unsigned long long  _channelType;
    MDMServerCore * _server;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) unsigned long long channelType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MDMServerCore *server;
@property (readonly) Class superclass;
@property (nonatomic) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)_MDMAccessEntitlementForChannelType:(unsigned long long)arg1;
- (id)_lacksEntitlementError:(id)arg1;
- (bool)_remoteProcess:(id)arg1 hasEntitlement:(id)arg2;
- (void)blockAppInstallsWithCompletion:(id /* block */)arg1;
- (unsigned long long)channelType;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)arg1;
- (id)initWithXPCConnection:(id)arg1 server:(id)arg2;
- (void)isAwaitingUserConfiguredWithCompletion:(id /* block */)arg1;
- (void)migrateMDMWithContext:(int)arg1 completion:(id /* block */)arg2;
- (void)notifyNewConfigurationWithCompletion:(id /* block */)arg1;
- (void)processDeviceRequest:(id)arg1 encodeResponse:(bool)arg2 completion:(id /* block */)arg3;
- (void)processUserRequest:(id)arg1 encodeResponse:(bool)arg2 completion:(id /* block */)arg3;
- (void)pushTokenWithCompletion:(id /* block */)arg1;
- (void)reauthenticationCompleteWithCompletion:(id /* block */)arg1;
- (void)requestInstallOfAppsInRestoreWithCompletion:(id /* block */)arg1;
- (void)retryNotNowWithCompletion:(id /* block */)arg1;
- (void)scheduleTokenUpdateIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)scheduleTokenUpdateWithCompletion:(id /* block */)arg1;
- (id)server;
- (void)setServer:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)simulatePushIfNetworkTetheredWithCompletion:(id /* block */)arg1;
- (void)simulatePushWithCompletion:(id /* block */)arg1;
- (void)touchWithCompletion:(id /* block */)arg1;
- (void)unblockAppInstallsWithCompletion:(id /* block */)arg1;
- (void)uprootMDMWithCompletion:(id /* block */)arg1;
- (id)xpcConnection;

@end
