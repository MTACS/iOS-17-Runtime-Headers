
@interface MTSDeviceSetupExtensionMessenger : NSObject <HMFLogging> {
    NSURL * _containingAppBundleURL;
    id /* block */  _executeExtensionQueryHandler;
    <MTSDeviceSetupExtensionProcess> * _extensionProcess;
    id /* block */  _extensionProcessFactory;
    <MTSXPCConnection> * _xpcConnection;
}

@property (readonly, copy) NSURL *containingAppBundleURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ executeExtensionQueryHandler;
@property (retain) <MTSDeviceSetupExtensionProcess> *extensionProcess;
@property (copy) id /* block */ extensionProcessFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) <MTSXPCConnection> *xpcConnection;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configureDeviceWithName:(id)arg1 room:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)containingAppBundleURL;
- (void)dealloc;
- (id /* block */)executeExtensionQueryHandler;
- (id)extensionProcess;
- (id /* block */)extensionProcessFactory;
- (void)fetchRoomsInHome:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithContainingAppBundleURL:(id)arg1;
- (void)pairDeviceInHome:(id)arg1 onboardingPayload:(id)arg2 uuid:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)selectThreadNetworkFromScanResults:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)selectWiFiNetworkFromScanResults:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setExecuteExtensionQueryHandler:(id /* block */)arg1;
- (void)setExtensionProcess:(id)arg1;
- (void)setExtensionProcessFactory:(id /* block */)arg1;
- (void)setXpcConnection:(id)arg1;
- (bool)startWithError:(id*)arg1;
- (void)validateDeviceCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)xpcConnection;

@end
