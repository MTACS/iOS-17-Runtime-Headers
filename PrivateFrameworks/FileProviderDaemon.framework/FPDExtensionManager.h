
@interface FPDExtensionManager : NSObject <LSObserverDelegate> {
    NSMutableDictionary * _alternateContentsURLDictionary;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id  _matchingContext;
    LSObserver * _observer;
    NSSet * _providerUUIDs;
    NSMutableDictionary * _providersByIdentifier;
    FPDPushConnection * _pushConnection;
    FPDServer * _server;
    NSMapTable * _sessionQueueForExtensionIdentifier;
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FPDPushConnection *pushConnection;
@property (nonatomic) FPDServer *server;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_deserializedAlternateContentsDictionary;
- (id)_domainForURL:(id)arg1;
- (void)_garbageCollectRemovedProvidersForInstalledProviderIdentifiers:(id)arg1;
- (void)_loadAlternateContentsDictionary;
- (id)_matchingAttributes;
- (void)_serializeAlternateContentsURLDictionary:(id)arg1;
- (void)_updateProviderListForFilteredFPDExtensions:(id)arg1;
- (void)_updateProviderListForMatchingExtensionRecords:(id)arg1;
- (void)accountsChanged:(id)arg1;
- (void)afterFirstDiscovery;
- (id)allProviders;
- (id)alternateContentsDictionaryForProviderIdentifier:(id)arg1;
- (id)alternateContentsURLForItemID:(id)arg1;
- (id)clouddocsExtensionIdentifier;
- (id)defaultProviderWithTopLevelBundleIdentifier:(id)arg1;
- (id)domainForActionOperationLocator:(id)arg1;
- (id)domainForURL:(id)arg1;
- (id)domainFromItemID:(id)arg1;
- (id)domainWithID:(id)arg1;
- (id)domainsForAppBundleIdentifier:(id)arg1;
- (void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
- (id)extensionPointRecords;
- (id)extensionTypes;
- (id)extensionsByID:(id)arg1;
- (void)forceSynchronousProviderUpdate;
- (void)garbageCollectDomainsExceptIdentifiers:(id)arg1 fromDirectory:(id)arg2 isUserData:(bool)arg3;
- (void)garbageCollectOnFirstLaunch;
- (void)handleAllExtensionsStarted:(id)arg1;
- (void)helena_loadProvidersAndMonitor;
- (id)initWithServer:(id)arg1 updateHandler:(id /* block */)arg2;
- (void)legacy_loadProvidersAndMonitor;
- (void)legacy_updateProviderListForMatchingExtensions:(id)arg1;
- (void)loadProvidersAndMonitor;
- (void)migrateEnabledStateIfNecessary:(id)arg1;
- (id)nonEvictableSizeByProviderDomain;
- (void)observerDidObserveDatabaseChange:(id)arg1;
- (id)providerDomainsByID;
- (id)providerDomainsByIDFromExtensionsByID:(id)arg1;
- (void)providerUpdateOnVolume:(id)arg1;
- (id)providerWithIdentifier:(id)arg1;
- (id)providersWithGroupContainers:(id)arg1 bundleIdentifier:(id)arg2;
- (id)providersWithTopLevelBundleIdentifier:(id)arg1;
- (void)purge:(id)arg1;
- (id)pushConnection;
- (id)server;
- (void)setAlternateContentsURL:(id)arg1 forItemID:(id)arg2;
- (void)setServer:(id)arg1;
- (id)uniquedExtensions:(id)arg1;

@end
