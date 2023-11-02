
@interface ICInAppMessageManager : NSObject <ICEnvironmentMonitorObserver, ICInAppMessageManagerProtocol, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSOperationQueue * _downloadOperationQueue;
    NSString * _foregroundApplicationIdentifier;
    ICUserIdentityStore * _identityStore;
    bool  _isSystemService;
    ICInAppMessageStore * _messageStore;
    NSOperationQueue * _operationQueue;
    <NSCopying> * _privacyObserverToken;
    NSXPCConnection * _xpcClientConnection;
    NSMutableSet * _xpcConnections;
    NSXPCListener * _xpcServiceListener;
}

@property (nonatomic, readonly) ICInAppMessageStore *_unsafeMessageStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (void)_addMessageEntry:(id)arg1 completion:(id /* block */)arg2;
- (void)_checkForMessageResourcesNeedingDownloadForcingIfNecessary:(bool)arg1;
- (void)_downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleICInAppMessagesDidChangeDistributedNotification:(id)arg1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (id)_init;
- (void)_loadConfigurationWithCompletion:(id /* block */)arg1;
- (void)_performCacheConsistencyCheck;
- (void)_performSyncRetryIfPending:(bool)arg1;
- (void)_performSyncWithCompletion:(id /* block */)arg1;
- (bool)_privacyAcknowledgementRequired;
- (void)_processSyncResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeConnection:(id)arg1;
- (void)_removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)_resourceCacheDirectoryPath;
- (void)_schedulePeriodicUpdate;
- (id)_storeRequestContext;
- (id)_unsafeMessageStore;
- (void)_updateShouldDownloadResources:(bool)arg1 onMessageWithIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (id)_xpcClientConnection;
- (void)addMessageEntry:(id)arg1 completion:(id /* block */)arg2;
- (void)addMessageEntryFromAMSDialogRequest:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)allMessageEntriesWithCompletion:(id /* block */)arg1;
- (void)clearCachedResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)flushEventsWithCompletion:(id /* block */)arg1;
- (void)getAllMetadataForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getAllMetadataForBundleIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)getGlobalPropertyForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)getMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getPropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithMessageStore:(id)arg1 identityStore:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)messageEntriesForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)messageEntriesForBundleIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)messageEntryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeApplicationBadgeForBundleIdentifier:(id)arg1 fromPresentedMessageEntry:(id)arg2 completion:(id /* block */)arg3;
- (void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)removeMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 completion:(id /* block */)arg3;
- (void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 flushImmediately:(bool)arg3 completion:(id /* block */)arg4;
- (void)resetMessagesWithCompletion:(id /* block */)arg1;
- (void)setGlobalProperty:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)startSystemService;
- (void)stopSystemService;
- (void)syncMessagesWithCompletion:(id /* block */)arg1;
- (void)updateMessageEntry:(id)arg1 completion:(id /* block */)arg2;
- (void)updateMetadata:(id)arg1 messageIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(id /* block */)arg4;

@end
