
@interface DKDiagnosticContext : NSExtensionContext <DKDiagnosticHostRemoteContext, DKDiagnosticRemoteContext, DKResponder> {
    bool  _isXPC;
    NSXPCConnection * _xpcConnection;
    id  _xpcPrincipalObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isXPC;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;
@property (nonatomic, retain) id xpcPrincipalObject;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_extensionAttributes;
- (id)_getRemoteProxyAndSetUpHandlers;
- (id)_helperConnnection;
- (id)_helperPrincipalObject;
- (id)_testName;
- (struct { unsigned int x1[8]; })auditToken;
- (void)cancelRemoteDiagnosticWithCompletion:(id /* block */)arg1;
- (void)completeWithDiagnosticResult:(id)arg1 completion:(id /* block */)arg2;
- (void)displayAlertWithHeader:(id)arg1 message:(id)arg2 buttonStrings:(id)arg3 completion:(id /* block */)arg4;
- (void)enableVolumeHUD:(bool)arg1;
- (void)getAsset:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithConnection:(id)arg1;
- (bool)isXPC;
- (void)remoteHostCompleteWithResult:(id)arg1 completion:(id /* block */)arg2;
- (void)remoteHostDisplayAlertWithHeader:(id)arg1 message:(id)arg2 buttonStrings:(id)arg3 completion:(id /* block */)arg4;
- (void)remoteHostEnableVolumeHUD:(bool)arg1;
- (void)remoteHostGetAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)remoteHostRequestPluginReloadOnFinishWithCompletion:(id /* block */)arg1;
- (void)remoteHostSetScreenToBrightness:(float)arg1 animate:(bool)arg2;
- (void)remoteHostShowUI:(id)arg1 completion:(id /* block */)arg2;
- (void)remoteHostUnpairSessionAccessoryOnTestCompletion;
- (void)remoteHostUpdateProgress:(id)arg1 forTest:(id)arg2;
- (void)remoteHostUploadAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)requestPluginReloadOnFinishWithCompletion:(id /* block */)arg1;
- (void)setIsXPC:(bool)arg1;
- (void)setRemoteDiagnosticNotAllowListedWithContactMessage:(id)arg1;
- (void)setScreenToBrightness:(float)arg1 animate:(bool)arg2;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcPrincipalObject:(id)arg1;
- (void)showUI:(id)arg1 completion:(id /* block */)arg2;
- (void)startRemoteDiagnosticWithDiagnosticParameters:(id)arg1 completion:(id /* block */)arg2;
- (id)testID;
- (void)unpairSessionAccessoryOnTestCompletion;
- (void)updateProgress:(id)arg1 forTest:(id)arg2;
- (void)uploadAssets:(id)arg1 completion:(id /* block */)arg2;
- (id)xpcConnection;
- (id)xpcPrincipalObject;

@end
