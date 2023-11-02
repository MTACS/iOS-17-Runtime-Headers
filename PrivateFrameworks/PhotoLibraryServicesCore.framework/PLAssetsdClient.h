
@interface PLAssetsdClient : NSObject {
    PLAutoBindingProxyFactory * _autoBindingProxyFactory;
    PLAssetsdCloudClient * _cloudClient;
    PLAssetsdCloudInternalClient * _cloudInternalClient;
    PLAssetsdClientXPCConnection * _connection;
    PLAssetsdDebugClient * _debugClient;
    PLAssetsdDemoClient * _demoClient;
    PLAssetsdDiagnosticsClient * _diagnosticsClient;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    PLAssetsdLibraryClient * _libraryClient;
    PLAssetsdLibraryInternalClient * _libraryInternalClient;
    PLAssetsdLibraryManagementClient * _libraryManagementClient;
    PLAssetsdMigrationClient * _migrationClient;
    PLAssetsdNotificationClient * _notificationClient;
    PLAssetsdPhotoKitAddClient * _photoKitAddClient;
    PLAssetsdPhotoKitClient * _photoKitClient;
    PLAssetsdPrivacySupportClient * _privacySupportClient;
    PLAssetsdResourceAvailabilityClient * _resourceAvailabilityClient;
    PLAssetsdResourceClient * _resourceClient;
    PLAssetsdResourceInternalClient * _resourceInternalClient;
    PLAssetsdResourceWriteOnlyClient * _resourceWriteOnlyClient;
    PLAssetsdClientSandboxExtensions * _sandboxExtensions;
    PLAssetsdSyncClient * _syncClient;
    PLAssetsdSystemLibraryURLReadOnlyClient * _systemLibraryURLReadOnlyClient;
}

@property (readonly) PLAssetsdCloudClient *cloudClient;
@property (readonly) PLAssetsdCloudInternalClient *cloudInternalClient;
@property (readonly) PLAssetsdDebugClient *debugClient;
@property (readonly) PLAssetsdDemoClient *demoClient;
@property (readonly) PLAssetsdDiagnosticsClient *diagnosticsClient;
@property (readonly) PLAssetsdLibraryClient *libraryClient;
@property (readonly) PLAssetsdLibraryInternalClient *libraryInternalClient;
@property (readonly) PLAssetsdLibraryManagementClient *libraryManagementClient;
@property (readonly) PLAssetsdMigrationClient *migrationClient;
@property (readonly) PLAssetsdNotificationClient *notificationClient;
@property (readonly) PLAssetsdPhotoKitAddClient *photoKitAddClient;
@property (readonly) PLAssetsdPhotoKitClient *photoKitClient;
@property (readonly) PLAssetsdResourceAvailabilityClient *resourceAvailabilityClient;
@property (readonly) PLAssetsdResourceClient *resourceClient;
@property (readonly) PLAssetsdResourceInternalClient *resourceInternalClient;
@property (readonly) PLAssetsdSyncClient *syncClient;

+ (id)sharedSystemLibraryAssetsdClient;

- (void).cxx_destruct;
- (id)_setupClientClass:(Class)arg1 proxyGetter:(SEL)arg2 options:(long long)arg3;
- (void)_updateLibraryStateConnectionInterrupted:(id)arg1;
- (void)addPhotoLibraryUnavailabilityHandler:(id /* block */)arg1;
- (id)cloudClient;
- (id)cloudInternalClient;
- (void)dealloc;
- (id)debugClient;
- (id)demoClient;
- (id)diagnosticsClient;
- (id)init;
- (id)initWithPhotoLibraryURL:(id)arg1;
- (id)libraryClient;
- (id)libraryInternalClient;
- (id)libraryManagementClient;
- (id)migrationClient;
- (id)notificationClient;
- (id)photoKitAddClient;
- (id)photoKitClient;
- (id)privacySupportClient;
- (id)resourceAvailabilityClient;
- (id)resourceClient;
- (id)resourceInternalClient;
- (id)resourceWriteOnlyClient;
- (void)sendDaemonJob:(id)arg1 shouldRunSerially:(bool)arg2 replyHandler:(id /* block */)arg3;
- (id)syncClient;
- (id)systemLibraryURLReadOnlyClient;
- (void)waitUntilConnectionSendsAllMessages;

@end
