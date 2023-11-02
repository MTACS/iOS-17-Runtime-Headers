
@interface IMBalloonPluginManager : NSObject {
    IMBalloonPluginManagerModel * _model;
    Class  _richLinksDataSourceClass;
}

@property (nonatomic, retain) IMBalloonPluginManagerModel *model;
@property (nonatomic, readonly, retain) Class richLinksDataSourceClass;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (bool)_allowExtensionWithIdentifier:(id)arg1;
+ (id)_extensionBlocklist;
+ (bool)_isExtensionBlocklisted:(id)arg1;
+ (bool)_isServerBlocklistedBundleIdentifier:(id)arg1 serverBag:(id)arg2;
+ (bool)_shouldAddFindMyToBlockList;
+ (bool)_shouldAddSafetyMonitorToBlockList;
+ (id)balloonProviderBundlePathURL;
+ (void)disableExtensionDiscovery;
+ (void)enableAlternatePathPlugins;
+ (bool)isRunningPPT;
+ (id)precacheBalloonAppExtensionsForExtensions:(id)arg1;
+ (void)setIsRunningPPT:(bool)arg1;
+ (id)sharedInstance;
+ (id)signpostLogHandle;

- (void).cxx_destruct;
- (id)_appProxyBundleIdentifiersForAppPlugins;
- (void)_clearPluginMetadataForUninstalledApps;
- (id)_currentlyInstalledExtensionsExcludingExtensionPoint:(id)arg1;
- (void)_deleteMetaDataForPlugins:(id)arg1;
- (id)_extensionWithIdentifier:(id)arg1;
- (id)_fallBackMessagesExtensionPluginForBundleID:(id)arg1;
- (void)_findPluginsInPathInternal:(id)arg1;
- (void)_findPluginsInPaths:(id)arg1;
- (id)_identifiersForAppPlugins;
- (id)_infoPlistPathForPluginCreatingFolderIfNeeded:(id)arg1;
- (id)_insertPluginForAppBundle:(id)arg1 balloonProviderBundle:(id)arg2;
- (id)_insertPluginForExtension:(id)arg1 balloonProviderBundle:(id)arg2 precachedBalloonAppExtensions:(id)arg3 timingCollection:(id)arg4;
- (void)_loadAllDataSources;
- (void)_loadAppBundleDataSources;
- (void)_loadAppExtensionDataSources;
- (id)_loadAppExtensionDataSourcesForExtensionPoint:(id)arg1;
- (id)_metadataForPluginIdentifier:(id)arg1;
- (void)_moveExtensionDataSourcesFromMessagesExtensionPluginToAppExtensions;
- (id)_pluginPlistPath:(id)arg1;
- (id)_pluginsForWhichWeHaveMetadata;
- (void)_postDeferredInstalledAppsChangedNotificationIfNecessary;
- (void)_postInstalledAppsChangedNotification;
- (id)_proxyIdentifiersForPlugins;
- (void)_removePluginsForIdentifiers:(id)arg1;
- (void)_removePluginsWithDelay;
- (void)_setPluginsToRemoveAndCallSelectorWithDelay:(id)arg1;
- (bool)_shouldSkipUpdatingPluginBundleIdentifier:(id)arg1;
- (void)_storeMetadata:(id)arg1 _forPlugin:(id)arg2;
- (void)_transferUpdated:(id)arg1;
- (void)_updatePluginsForBundles:(id)arg1;
- (void)_updatePluginsForExtensions:(id)arg1 extensionPoint:(id)arg2;
- (void)_updatePluginsForExtensions:(id)arg1 extensionPoint:(id)arg2 precachedBalloonAppExtensions:(id)arg3;
- (id)allPlugins;
- (id)balloonPluginForBundleID:(id)arg1;
- (id)conversationID:(id)arg1 appID:(id)arg2;
- (Class)dataSourceClassForBundleID:(id)arg1;
- (id)dataSourceForPluginPayload:(id)arg1;
- (void)dealloc;
- (id)existingDataSourceForMessageGUID:(id)arg1 bundleID:(id)arg2;
- (id)init;
- (void)insertDataSource:(id)arg1 forGUID:(id)arg2;
- (void)insertPlugin:(id)arg1;
- (void)loadExtensionWithIdentifierIfNeeded:(id)arg1;
- (id)localParticipantIdentifierForAppID:(id)arg1 conversationID:(id)arg2;
- (id)model;
- (void)pluginChatItem:(id)arg1 didRelenquishNonResuableController:(id)arg2 contextIdentifier:(id)arg3;
- (void)pluginChatItem:(id)arg1 didRelinquishReusableController:(id)arg2 contextIdentifier:(id)arg3;
- (id)recipientIDForRecipient:(id)arg1 appID:(id)arg2;
- (void)removePluginWithBundleID:(id)arg1;
- (Class)richLinksDataSourceClass;
- (void)setModel:(id)arg1;
- (void)setPluginEnabled:(bool)arg1 identifier:(id)arg2;
- (id)signpostLogHandle;
- (id)systemBundleIdentifierForPluginIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)balloonControllerForIMChatItem:(id)arg1 contextIdentifier:(id)arg2;

@end
