
@interface CPSDaemonConnection : NSObject <CPSSessionObserving> {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    CPSSessionProxy * _sessionProxy;
    NSXPCConnection * _xpcConnection;
    NSXPCConnection * _xpcConnectionNotEntitled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CPSSessionProxy *sessionProxy;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;
@property (nonatomic, readonly) NSXPCConnection *xpcConnectionNotEntitled;

+ (id)sharedConnection;

- (void).cxx_destruct;
- (void)cancelPrewarmingClipWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)checkAndConsumeShowsAppAttributionBannerForBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmLocationWithURL:(id)arg1 inRegion:(id)arg2 completion:(id /* block */)arg3;
- (void)didDetermineAvailability:(bool)arg1 options:(id)arg2;
- (void)didFinishLoadingWithError:(id)arg1;
- (void)didFinishTestingAtTime:(double)arg1;
- (void)didInstallApplicationPlaceholder;
- (void)didRetrieveApplicationIcon:(id)arg1;
- (void)didRetrieveBusinessIcon:(id)arg1;
- (void)didRetrieveHeroImage:(id)arg1;
- (void)didUpdateInstallProgress:(id)arg1;
- (void)didUpdateMetadata:(id)arg1;
- (void)fetchABRMetadataForDiagnosticsWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAMPMetadataForDiagnosticsWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchClipMetadataAndImagesWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchClipMetadataWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchClipURLWithURLHash:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getLastLaunchOptionsWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)getUserNotificationConsentForBundleID:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)installClipWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)isClipURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)notifyWebClipActivationWithBundleID:(id)arg1 referrerBundleID:(id)arg2;
- (void)openClipWithInvocationUIIfNeededWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openClipWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openClipWithURL:(id)arg1 launchOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)performValidationWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)prewarmClipWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerSessionProxy:(id)arg1;
- (void)remoteServiceDidCrash;
- (id)sessionProxy;
- (void)setSessionProxy:(id)arg1;
- (void)stopStallingCurrentInstallationWithCompletionHandler:(id /* block */)arg1;
- (void)uninstallClipWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)uninstallClipsWithBundleIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unregisterSessionProxy:(id)arg1;
- (id)xpcConnection;
- (id)xpcConnectionNotEntitled;

@end
