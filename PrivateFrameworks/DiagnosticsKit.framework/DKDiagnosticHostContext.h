
@interface DKDiagnosticHostContext : NSExtensionContext <DKDiagnosticHostRemoteContext, DKExtensionHostAdapter> {
    <DKExtensionHostAdapterDelegate> * _delegate;
    bool  _isXPC;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DKExtensionHostAdapterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isXPC;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_helperConnnection;
- (void)cancelWithCompletion:(id /* block */)arg1;
- (id)delegate;
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
- (void)setDelegate:(id)arg1;
- (void)setIsXPC:(bool)arg1;
- (void)setNotAllowListedWithContactMessage:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)startWithPayload:(id)arg1 completion:(id /* block */)arg2;
- (id)xpcConnection;

@end
